#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <cmath>
#include <string>
#include <ctime>

using namespace std;

// Helper function to check if a file exists
bool fileExists(const string& filename) {
    ifstream f(filename);
    return f.is_open();
}

// Helper function to format a double without unnecessary trailing zeros.
string formatDouble(double value) {
    // Use high precision in default float format.
    ostringstream oss;
    oss << defaultfloat << setprecision(15) << value;
    string s = oss.str();

    // If scientific notation is used, return it as-is.
    if (s.find('e') != string::npos || s.find('E') != string::npos) {
        return s;
    }
    
    // Find decimal point
    size_t dotPos = s.find('.');
    if (dotPos == string::npos) return s; // No decimal point, just return
    
    // Remove trailing zeros
    size_t endPos = s.size() - 1;
    while (endPos > dotPos && s[endPos] == '0') {
        endPos--;
    }
    // If the last character is the dot, remove it too.
    if (endPos == dotPos) {
        endPos--;
    }
    
    return s.substr(0, endPos + 1);
}

int main() {
    // Fixed voltage and tolerance
    const double V = 5.0;
    const double tol = 0.05;  // 5% tolerance

    // Ask the user for the resistor values (in Ohms)
    double R1, R2, R3;
    cout << "Enter R1 (in Ohms): ";
    cin >> R1;
    cout << "Enter R2 (in Ohms): ";
    cin >> R2;
    cout << "Enter R3 (in Ohms): ";
    cin >> R3;

    // Calculate minimum and maximum resistor values
    double R1_min = R1 * (1 - tol);
    double R1_max = R1 * (1 + tol);
    double R2_min = R2 * (1 - tol);
    double R2_max = R2 * (1 + tol);
    double R3_min = R3 * (1 - tol);
    double R3_max = R3 * (1 + tol);

    // Lambda for computing parallel resistance
    auto parallelResistance = [](double a, double b, double c) -> double {
        return 1.0 / ((1.0 / a) + (1.0 / b) + (1.0 / c));
    };

    // Compute total resistance for nominal, min and max values
    double RT = parallelResistance(R1, R2, R3);
    double RT_min = parallelResistance(R1_min, R2_min, R3_min);
    double RT_max = parallelResistance(R1_max, R2_max, R3_max);

    // Compute total current (I = V / R)
    double IT = V / RT;
    double IT_min = V / RT_min;
    double IT_max = V / RT_max;

    // Compute total power (P = V * I)
    double PT = V * IT;
    double PT_min = V * IT_min;
    double PT_max = V * IT_max;

    // Individual branch currents (I = V / R)
    double I1 = V / R1;
    double I2 = V / R2;
    double I3 = V / R3;
    double I1_min = V / R1_min;
    double I2_min = V / R2_min;
    double I3_min = V / R3_min;
    double I1_max = V / R1_max;
    double I2_max = V / R2_max;
    double I3_max = V / R3_max;

    // Individual branch power consumption (P = V * I)
    double P1 = V * I1;
    double P2 = V * I2;
    double P3 = V * I3;
    double P1_min = V * I1_min;
    double P2_min = V * I2_min;
    double P3_min = V * I3_min;
    double P1_max = V * I1_max;
    double P2_max = V * I2_max;
    double P3_max = V * I3_max;

    // Use stringstream to generate the Markdown content
    ostringstream md;
    
    md << "# PARALLEL CIRCUIT\n\n";
    
    md << "## [1] GIVEN:\n\n";
    md << "$$\nR_1 = " << formatDouble(R1) << "\\Omega \\quad R_2 = " 
       << formatDouble(R2) << "\\Omega \\quad R_3 = " << formatDouble(R3) << "\\Omega\n$$\n\n";
    md << "$$\nV = " << formatDouble(V) << "V\n$$\n\n";
    
    md << "### MINIMUM:\n\n";
    md << "$$\nR_{1\\text{min}} = " << formatDouble(R1) << "\\Omega - (0.05 \\times " 
       << formatDouble(R1) << "\\Omega) = " << formatDouble(R1_min) << "\\Omega\n$$\n\n";
    md << "$$\nR_{2\\text{min}} = " << formatDouble(R2) << "\\Omega - (0.05 \\times " 
       << formatDouble(R2) << "\\Omega) = " << formatDouble(R2_min) << "\\Omega\n$$\n\n";
    md << "$$\nR_{3\\text{min}} = " << formatDouble(R3) << "\\Omega - (0.05 \\times " 
       << formatDouble(R3) << "\\Omega) = " << formatDouble(R3_min) << "\\Omega\n$$\n\n";
    
    md << "### MAXIMUM:\n\n";
    md << "$$\nR_{1\\text{max}} = " << formatDouble(R1) << "\\Omega + (0.05 \\times " 
       << formatDouble(R1) << "\\Omega) = " << formatDouble(R1_max) << "\\Omega\n$$\n\n";
    md << "$$\nR_{2\\text{max}} = " << formatDouble(R2) << "\\Omega + (0.05 \\times " 
       << formatDouble(R2) << "\\Omega) = " << formatDouble(R2_max) << "\\Omega\n$$\n\n";
    md << "$$\nR_{3\\text{max}} = " << formatDouble(R3) << "\\Omega + (0.05 \\times " 
       << formatDouble(R3) << "\\Omega) = " << formatDouble(R3_max) << "\\Omega\n$$\n\n";
    
    md << "---\n\n";
    
    md << "## [2] REQUIRED:\n\n";
    md << "$$\nR_T \\quad I_T \\quad P_T\n$$\n\n";
    md << "$$\nI_1 \\quad I_2 \\quad I_3\n$$\n\n";
    md << "$$\nP_1 \\quad P_2 \\quad P_3\n$$\n\n";
    
    md << "---\n\n";
    
    md << "## [3] FORMULA:\n\n";
    md << "$$\n\\frac{1}{R_T} = \\frac{1}{R_1} + \\frac{1}{R_2} + \\frac{1}{R_3}\n$$\n\n";
    md << "$$\nI_T = \\frac{V_T}{R_T}\n$$\n\n";
    md << "$$\nP_T = I_T \\times V_T\n$$\n\n";
    
    md << "---\n\n";
    
    md << "## [4] SOLUTION:\n\n";
    
    md << "### SOLVING FOR $R_T$ (Resistance):\n\n";
    md << "$$\nR_T = \\frac{1}{\\frac{1}{R_1} + \\frac{1}{R_2} + \\frac{1}{R_3}}\n$$\n\n";
    md << "$$\nR_T = \\frac{1}{\\frac{1}{" << formatDouble(R1) << "\\Omega} + \\frac{1}{" 
       << formatDouble(R2) << "\\Omega} + \\frac{1}{" << formatDouble(R3) << "\\Omega}}\n$$\n\n";
    md << "$$\nR_T = " << formatDouble(RT) << "\\Omega\n$$\n\n";
    
    md << "MINIMUM $R_{T\\text{min}}$:\n\n";
    md << "$$\nR_{T\\text{min}} = \\frac{1}{\\frac{1}{" << formatDouble(R1_min) << "\\Omega} + \\frac{1}{" 
       << formatDouble(R2_min) << "\\Omega} + \\frac{1}{" << formatDouble(R3_min) << "\\Omega}}\n$$\n\n";
    md << "$$\nR_{T\\text{min}} = " << formatDouble(RT_min) << "\\Omega\n$$\n\n";
    
    md << "MAXIMUM $R_{T\\text{max}}$:\n\n";
    md << "$$\nR_{T\\text{max}} = \\frac{1}{\\frac{1}{" << formatDouble(R1_max) << "\\Omega} + \\frac{1}{" 
       << formatDouble(R2_max) << "\\Omega} + \\frac{1}{" << formatDouble(R3_max) << "\\Omega}}\n$$\n\n";
    md << "$$\nR_{T\\text{max}} = " << formatDouble(RT_max) << "\\Omega\n$$\n\n";
    
    md << "---\n\n";
    
    md << "### SOLVING FOR $I_T$ (Current):\n\n";
    md << "$$\nI_T = \\frac{V_T}{R_T}\n$$\n\n";
    md << "$$\nI_T = \\frac{" << formatDouble(V) << "V}{" << formatDouble(RT) << "\\Omega}\n$$\n\n";
    md << "$$\nI_T = " << formatDouble(IT) << "A\n$$\n\n";
    
    md << "MINIMUM $I_{T\\text{min}}$:\n\n";
    md << "$$\nI_{T\\text{min}} = \\frac{" << formatDouble(V) << "V}{" << formatDouble(RT_min) << "\\Omega}\n$$\n\n";
    md << "$$\nI_{T\\text{min}} = " << formatDouble(IT_min) << "A\n$$\n\n";
    
    md << "MAXIMUM $I_{T\\text{max}}$:\n\n";
    md << "$$\nI_{T\\text{max}} = \\frac{" << formatDouble(V) << "V}{" << formatDouble(RT_max) << "\\Omega}\n$$\n\n";
    md << "$$\nI_{T\\text{max}} = " << formatDouble(IT_max) << "A\n$$\n\n";
    
    md << "---\n\n";
    
    md << "### CHECKING FOR $V_T$:\n\n";
    md << "$$\nV_T = I_T \\times R_T\n$$\n\n";
    md << "$$\nV_T = " << formatDouble(IT) << "A \\times " << formatDouble(RT) << "\\Omega\n$$\n\n";
    md << "$$\nV_T = " << formatDouble(V) << "V\n$$\n\n";
    
    md << "---\n\n";
    
    md << "### SOLVING FOR $I_n$ (Individual Current):\n\n";
    md << "**NOTE:** $V_T = V_1 = V_2 = V_3 = " << formatDouble(V) << "V$\n\n";
    md << "$$\nI_1 = \\frac{V_1}{R_1} = \\frac{" << formatDouble(V) << "V}{" << formatDouble(R1) << "\\Omega} = " 
       << formatDouble(I1) << "A\n$$\n\n";
    md << "$$\nI_2 = \\frac{V_2}{R_2} = \\frac{" << formatDouble(V) << "V}{" << formatDouble(R2) << "\\Omega} = " 
       << formatDouble(I2) << "A\n$$\n\n";
    md << "$$\nI_3 = \\frac{V_3}{R_3} = \\frac{" << formatDouble(V) << "V}{" << formatDouble(R3) << "\\Omega} = " 
       << formatDouble(I3) << "A\n$$\n\n";
    
    md << "TOTAL OF INDIVIDUAL CURRENT:\n\n";
    md << "$$\nI_T = \\sum I_n = I_1 + I_2 + I_3\n$$\n\n";
    md << "$$\nI_T = " << formatDouble(I1) << "A + " << formatDouble(I2) << "A + " 
       << formatDouble(I3) << "A\n$$\n\n";
    md << "$$\nI_T = " << formatDouble(IT) << "A\n$$\n\n";
    
    md << "MINIMUM $I_{n\\text{min}}$:\n\n";
    md << "$$\nI_{1\\text{min}} = \\frac{V_1}{R_1} = \\frac{" << formatDouble(V) << "V}{" << formatDouble(R1_min) 
       << "\\Omega} = " << formatDouble(I1_min) << "A\n$$\n\n";
    md << "$$\nI_{2\\text{min}} = \\frac{V_2}{R_2} = \\frac{" << formatDouble(V) << "V}{" << formatDouble(R2_min) 
       << "\\Omega} = " << formatDouble(I2_min) << "A\n$$\n\n";
    md << "$$\nI_{3\\text{min}} = \\frac{V_3}{R_3} = \\frac{" << formatDouble(V) << "V}{" << formatDouble(R3_min) 
       << "\\Omega} = " << formatDouble(I3_min) << "A\n$$\n\n";
    md << "\n\n";
    md << "$$\nI_{T\\text{min}} = " << formatDouble(I1_min) << "A + " << formatDouble(I2_min) 
       << "A + " << formatDouble(I3_min) << "A\n$$\n\n";
    md << "$$\nI_{T\\text{min}} = " << formatDouble(IT_min) << "A\n$$\n\n";
    
    md << "MAXIMUM $I_{n\\text{max}}$:\n\n";
    md << "$$\nI_{1\\text{max}} = \\frac{V_1}{R_1} = \\frac{" << formatDouble(V) << "V}{" << formatDouble(R1_max) 
       << "\\Omega} = " << formatDouble(I1_max) << "A\n$$\n\n";
    md << "$$\nI_{2\\text{max}} = \\frac{V_2}{R_2} = \\frac{" << formatDouble(V) << "V}{" << formatDouble(R2_max) 
       << "\\Omega} = " << formatDouble(I2_max) << "A\n$$\n\n";
    md << "$$\nI_{3\\text{max}} = \\frac{V_3}{R_3} = \\frac{" << formatDouble(V) << "V}{" << formatDouble(R3_max) 
       << "\\Omega} = " << formatDouble(I3_max) << "A\n$$\n\n";
    md << "\n\n";
    md << "$$\nI_{T\\text{max}} = " << formatDouble(I1_max) << "A + " << formatDouble(I2_max) 
       << "A + " << formatDouble(I3_max) << "A\n$$\n\n";
    md << "$$\nI_{T\\text{max}} = " << formatDouble(IT_max) << "A\n$$\n\n";
    
    md << "---\n\n";
    
    md << "### SOLVING FOR $P_T$ (Power Consumption):\n\n";
    md << "$$\nP_T = I_T \\times V_T\n$$\n\n";
    md << "$$\nP_T = " << formatDouble(IT) << "A \\times " << formatDouble(V) << "V\n$$\n\n";
    md << "$$\nP_T = " << formatDouble(PT) << "W\n$$\n\n";
    
    md << "MINIMUM $P_{T\\text{min}}$:\n\n";
    md << "$$\nP_{T\\text{min}} = " << formatDouble(IT_min) << "A \\times " << formatDouble(V) 
       << "V = " << formatDouble(PT_min) << "W\n$$\n\n";
    
    md << "MAXIMUM $P_{T\\text{max}}$:\n\n";
    md << "$$\nP_{T\\text{max}} = " << formatDouble(IT_max) << "A \\times " << formatDouble(V) 
       << "V = " << formatDouble(PT_max) << "W\n$$\n\n";
    
    md << "---\n\n";
    
    md << "### SOLVING FOR $P_n$ (Individual Power Consumption):\n\n";
    md << "$$\nP_n = V_n \\times I_n\n$$\n\n";
    
    md << "NOMINAL:\n\n";
    md << "$$\nP_1 = " << formatDouble(I1) << "A \\times " << formatDouble(V) << "V = " 
       << formatDouble(P1) << "W\n$$\n\n";
    md << "$$\nP_2 = " << formatDouble(I2) << "A \\times " << formatDouble(V) << "V = " 
       << formatDouble(P2) << "W\n$$\n\n";
    md << "$$\nP_3 = " << formatDouble(I3) << "A \\times " << formatDouble(V) << "V = " 
       << formatDouble(P3) << "W\n$$\n\n";
    md << "*TOTAL INDIVIDUAL POWER CONSUMPTION:*\n\n";
    md << "$$\nP_T = " << formatDouble(P1) << "W + " << formatDouble(P2) << "W + " 
       << formatDouble(P3) << "W = " << formatDouble(PT) << "W\n$$\n\n";
    
    md << "MINIMUM $P_{n\\text{min}}$:\n\n";
    md << "$$\nP_{1\\text{min}} = " << formatDouble(I1_min) << "A \\times " << formatDouble(V) << "V = " 
       << formatDouble(P1_min) << "W\n$$\n\n";
    md << "$$\nP_{2\\text{min}} = " << formatDouble(I2_min) << "A \\times " << formatDouble(V) << "V = " 
       << formatDouble(P2_min) << "W\n$$\n\n";
    md << "$$\nP_{3\\text{min}} = " << formatDouble(I3_min) << "A \\times " << formatDouble(V) << "V = " 
       << formatDouble(P3_min) << "W\n$$\n\n";
    md << "*TOTAL MINIMUM INDIVIDUAL POWER CONSUMPTION:*\n\n";
    md << "$$\nP_{T\\text{min}} = " << formatDouble(P1_min) << "W + " << formatDouble(P2_min) 
       << "W + " << formatDouble(P3_min) << "W = " << formatDouble(P1_min + P2_min + P3_min) << "W\n$$\n\n";
    
    md << "MAXIMUM $P_{n\\text{max}}$:\n\n";
    md << "$$\nP_{1\\text{max}} = " << formatDouble(I1_max) << "A \\times " << formatDouble(V) << "V = " 
       << formatDouble(P1_max) << "W\n$$\n\n";
    md << "$$\nP_{2\\text{max}} = " << formatDouble(I2_max) << "A \\times " << formatDouble(V) << "V = " 
       << formatDouble(P2_max) << "W\n$$\n\n";
    md << "$$\nP_{3\\text{max}} = " << formatDouble(I3_max) << "A \\times " << formatDouble(V) << "V = " 
       << formatDouble(P3_max) << "W\n$$\n\n";
    md << "*TOTAL MAXIMUM INDIVIDUAL POWER CONSUMPTION:*\n\n";
    md << "$$\nP_{T\\text{max}} = " << formatDouble(P1_max) << "W + " << formatDouble(P2_max) 
       << "W + " << formatDouble(P3_max) << "W = " << formatDouble(P1_max + P2_max + P3_max) << "W\n$$\n";

    // Generate filename with date and hour
    time_t now = time(0);                  
    tm* ltm = localtime(&now);             
    char buffer[20];                       
    strftime(buffer, sizeof(buffer), "%Y%m%d_%H", ltm);  
    string date_hour = buffer;             
    string base = "parallel_circuit_" + date_hour;  
    string filename = base + ".md";        
    int counter = 1;                       
    while (fileExists(filename)) {         // If file exists, append counter
        filename = base + " (" + to_string(counter) + ").md";
        counter++;
    }

    // Write the Markdown content to the file
    ofstream mdFile(filename);
    if (!mdFile) {
        cerr << "Error: Could not create '" << filename << "'" << endl;
        return 1;
    }
    mdFile << md.str();
    mdFile.close();

    cout << "Markdown file '" << filename << "' has been generated successfully." << endl;
    
    return 0;
}

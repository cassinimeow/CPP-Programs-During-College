#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // Given values
    const double V = 5.0; // Voltage in Volts

    // Nominal resistor values in Ohms
    const double R1 = 100.0;
    const double R2 = 320.0;
    const double R3 = 390.0;
    
    // Tolerance (5%)
    const double tol = 0.05;

    // Calculate minimum and maximum resistor values
    double R1_min = R1 * (1 - tol);
    double R1_max = R1 * (1 + tol);
    
    double R2_min = R2 * (1 - tol);
    double R2_max = R2 * (1 + tol);
    
    double R3_min = R3 * (1 - tol);
    double R3_max = R3 * (1 + tol);

    // Function for parallel resistance calculation
    auto parallelResistance = [](double r1, double r2, double r3) -> double {
        return 1.0 / (1.0/r1 + 1.0/r2 + 1.0/r3);
    };

    // Nominal total resistance, minimum and maximum
    double RT = parallelResistance(R1, R2, R3);
    double RT_min = parallelResistance(R1_min, R2_min, R3_min);
    double RT_max = parallelResistance(R1_max, R2_max, R3_max);

    // Total current calculations using Ohm's Law: I = V/R
    double IT = V / RT;
    double IT_min = V / RT_min;
    double IT_max = V / RT_max;

    // Total power consumption: P = V * I
    double PT = V * IT;
    double PT_min = V * IT_min;
    double PT_max = V * IT_max;

    // Individual branch currents (I = V/R)
    double I1 = V / R1;
    double I2 = V / R2;
    double I3 = V / R3;
    
    double I1_min = V / R1_min;
    double I2_min = V / R2_min;
    double I3_min = V / R3_min;
    
    double I1_max = V / R1_max;
    double I2_max = V / R2_max;
    double I3_max = V / R3_max;

    // Individual power consumption (P = V * I)
    double P1 = V * I1;
    double P2 = V * I2;
    double P3 = V * I3;

    double P1_min = V * I1_min;
    double P2_min = V * I2_min;
    double P3_min = V * I3_min;
    
    double P1_max = V * I1_max;
    double P2_max = V * I2_max;
    double P3_max = V * I3_max;

    // Set the output precision for high accuracy
    cout << fixed << setprecision(10);

    // Display results
    cout << "---- PARALLEL CIRCUIT CALCULATIONS ----\n\n";

    cout << "Given Values:\n";
    cout << "V = " << V << " V\n";
    cout << "R1 = " << R1 << " Ω, R2 = " << R2 << " Ω, R3 = " << R3 << " Ω\n\n";

    cout << "Tolerance: ±" << tol * 100 << "%\n";
    cout << "R1_min = " << R1_min << " Ω, R1_max = " << R1_max << " Ω\n";
    cout << "R2_min = " << R2_min << " Ω, R2_max = " << R2_max << " Ω\n";
    cout << "R3_min = " << R3_min << " Ω, R3_max = " << R3_max << " Ω\n\n";

    cout << "---- Total Resistance ----\n";
    cout << "Nominal RT = " << RT << " Ω\n";
    cout << "RT_min = " << RT_min << " Ω\n";
    cout << "RT_max = " << RT_max << " Ω\n\n";

    cout << "---- Total Current (Ohm's Law: I = V/RT) ----\n";
    cout << "Nominal IT = " << IT << " A\n";
    cout << "IT_min = " << IT_min << " A\n";
    cout << "IT_max = " << IT_max << " A\n\n";

    cout << "---- Total Power Consumption (P = V * I) ----\n";
    cout << "Nominal PT = " << PT << " W\n";
    cout << "PT_min = " << PT_min << " W\n";
    cout << "PT_max = " << PT_max << " W\n\n";

    cout << "---- Individual Branch Currents ----\n";
    cout << "I1 = " << I1 << " A, I2 = " << I2 << " A, I3 = " << I3 << " A\n";
    cout << "I1_min = " << I1_min << " A, I2_min = " << I2_min << " A, I3_min = " << I3_min << " A\n";
    cout << "I1_max = " << I1_max << " A, I2_max = " << I2_max << " A, I3_max = " << I3_max << " A\n\n";

    cout << "---- Individual Branch Power Consumption ----\n";
    cout << "P1 = " << P1 << " W, P2 = " << P2 << " W, P3 = " << P3 << " W\n";
    cout << "P1_min = " << P1_min << " W, P2_min = " << P2_min << " W, P3_min = " << P3_min << " W\n";
    cout << "P1_max = " << P1_max << " W, P2_max = " << P2_max << " W, P3_max = " << P3_max << " W\n\n";

    // Verification: Sum of individual currents should equal total current
    double IT_sum_nom = I1 + I2 + I3;
    double IT_sum_min = I1_min + I2_min + I3_min;
    double IT_sum_max = I1_max + I2_max + I3_max;
    
    cout << "Verification:\n";
    cout << "Sum of Nominal Branch Currents = " << IT_sum_nom << " A (should equal IT)\n";
    cout << "Sum of Min Branch Currents = " << IT_sum_min << " A (should equal IT_min)\n";
    cout << "Sum of Max Branch Currents = " << IT_sum_max << " A (should equal IT_max)\n";

    return 0;
}

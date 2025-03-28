#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

// Function to format numbers without unnecessary decimals
string formatFloat(double value) {
    ostringstream oss;
    if (value < 1.0) {
        oss << fixed << setprecision(2) << value; // Show two decimals for values < 1Ω
    } else if (value == static_cast<int>(value)) {
        oss << fixed << setprecision(0) << value; // Whole number, no decimals
    } else {
        oss << fixed << setprecision(2) << value; // Otherwise, keep two decimals
    }
    return oss.str();
}

int main() {
    // Define resistor color codes
    map<string, int> digit = {
        {"black", 0}, {"brown", 1}, {"red", 2}, {"orange", 3},
        {"yellow", 4}, {"green", 5}, {"blue", 6}, {"violet", 7},
        {"grey", 8}, {"white", 9}
    };

    map<string, double> multiplier = {
        {"black", 1}, {"brown", 10}, {"red", 100}, {"orange", 1000},
        {"yellow", 10000}, {"green", 100000}, {"blue", 1000000},
        {"violet", 10000000}, {"grey", 100000000}, {"white", 1000000000},
        {"gold", 0.1}, {"silver", 0.01}
    };

    map<string, double> tolerance = {
        {"brown", 1}, {"red", 2}, {"green", 0.5}, {"blue", 0.25},
        {"violet", 0.1}, {"grey", 0.05}, {"gold", 5}, {"silver", 10}, {"none", 20}
    };

    cout << "Enter 4 color names separated by spaces (e.g., Blue Green Blue Yellow), or type 'exit' to quit:\n";

    string line;
    while (getline(cin, line)) {
        if (line == "exit")
            break;

        istringstream iss(line);
        string col1, col2, col3, col4;
        if (!(iss >> col1 >> col2 >> col3 >> col4)) {
            cout << "Invalid input. Please enter exactly 4 color names.\n";
            continue;
        }

        // Convert input to lowercase
        auto toLower = [](string s) {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            return s;
        };

        col1 = toLower(col1);
        col2 = toLower(col2);
        col3 = toLower(col3);
        col4 = toLower(col4);

        // Validate colors
        if (digit.find(col1) == digit.end() || digit.find(col2) == digit.end() ||
            multiplier.find(col3) == multiplier.end() || tolerance.find(col4) == tolerance.end()) {
            cout << "One or more color names are invalid. Please try again.\n";
            continue;
        }

        // Extract values
        int d1 = digit[col1];
        int d2 = digit[col2];
        double mult = multiplier[col3];
        double tol = tolerance[col4];

        // Calculate resistance
        double value = ((d1 * 10) + d2) * mult;
        double kiloOhms = value / 1000.0;

        // Display result
        cout << "1st and 2nd Digits: " << (d1 * 10 + d2) << "\n"
             << "Multiplier: " << formatFloat(mult) << " (" << col3 << ")\n"
             << "Calculated Resistor Value = " << formatFloat(value) << " Ω";

        // Show kΩ only if value is ≥ 1,000 Ω
        if (value >= 1000) {
            cout << " (" << formatFloat(kiloOhms) << " kΩ)";
        }

        cout << " (±" << formatFloat(tol) << "%)\n\n"
             << "Enter next colors or type 'exit' to quit:\n";
    }

    return 0;
}
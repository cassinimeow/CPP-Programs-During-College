#include <iostream>
#include <cmath> // For using the pow() function

using namespace std;

int main() {
    // Headers
    cout << "\n======================================" << endl;
    cout << "PROGRAM: Exponentiation" << endl;
    cout << "======================================\n" << endl;
    
    double base, exponent, result;
    
    // Prompt the user to input the base and exponent values
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    
    // Compute the power using the pow() function
    result = pow(base, exponent);
    
    // Display the result
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;
    
    // Extra Info
    cout << "\n======================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S. | DIT 1-3" << endl;
    cout << "======================================\n" << endl;
    return 0;
}

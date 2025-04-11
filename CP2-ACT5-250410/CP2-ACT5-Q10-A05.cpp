#include <iostream>

using namespace std;

int main() {
    // Header
    cout << "\n======================================" << endl;
    cout << "PROGRAM: Factorial Calculator" << endl;
    cout << "======================================\n" << endl;

    int num;
    unsigned long long factorial = 1;

    // Ask user for input
    cout << "Enter a non-negative integer: ";
    cin >> num;

    // Check if input is valid
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    // Step-by-step arithmetic process
    cout << "\nStep-by-step process:" << endl;
    for (int i = 1; i <= num; i++) {
        cout << factorial << " × " << i << " = ";
        factorial *= i;
        cout << factorial << endl;
    }

    // Final output
    cout << "\nThe factorial of " << num << " is: " << factorial << endl;

    // Footer
    cout << "\n======================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S. | DIT 1-3" << endl;
    cout << "======================================\n" << endl;

    return 0;
}

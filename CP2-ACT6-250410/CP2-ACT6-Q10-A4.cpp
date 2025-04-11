#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n======================================" << endl;
    cout << "PROGRAM: Multiplication Table" << endl;
    cout << "======================================\n" << endl;
    
    int num;
    
    // Prompt the user to input a positive integer
    cout << "Enter a positive integer: ";
    cin >> num;
    
    // Validate input
    if (num <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    }
    
    // Print the multiplication table for the given number (1 to 10)
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    
    // Extra Info
    cout << "\n======================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S. | DIT 1-3" << endl;
    cout << "======================================\n" << endl;
    return 0;
}

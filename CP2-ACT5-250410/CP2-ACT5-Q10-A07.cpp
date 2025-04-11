#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n======================================" << endl;
    cout << "PROGRAM: Reverse Digits" << endl;
    cout << "======================================\n" << endl;
    
    int num, reversed = 0, remainder;
    
    // Prompt the user to input an integer
    cout << "Enter an integer: ";
    cin >> num;
    
    int original = num; // Store original value for output
    
    // Process for reversing the digits
    while (num != 0) {
        remainder = num % 10;     // Get the last digit
        reversed = reversed * 10 + remainder; // Append digit to reversed
        num /= 10;                // Remove last digit
    }
    
    // Display the reversed number
    cout << "The reverse of " << original << " is: " << reversed << endl;
    
    // Extra Info
    cout << "\n======================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S. | DIT 1-3" << endl;
    cout << "======================================\n" << endl;
    return 0;
}

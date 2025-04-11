#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n======================================" << endl;
    cout << "PROGRAM: Add Two Numbers Repeatedly" << endl;
    cout << "======================================" << endl;
    
    int num1, num2, sum;
    char choice;
    
    // Do-while loop to perform addition repeatedly based on user's choice
    do {
        // Prompt user for two numbers
        cout << "\nEnter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        
        // Calculate and display the sum
        sum = num1 + num2;
        cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
        
        // Ask user if they want to operate again
        cout << "\nDo you want to add two more numbers? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    
    // Extra Info
    cout << "\n======================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S. | DIT 1-3" << endl;
    cout << "======================================\n" << endl;
    return 0;
}

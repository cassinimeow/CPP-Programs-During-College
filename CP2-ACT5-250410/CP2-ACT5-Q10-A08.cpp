#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n======================================" << endl;
    cout << "PROGRAM: Sum of Even and Odd Integers" << endl;
    cout << "======================================\n" << endl;
    
    int number;
    int sumEven = 0, sumOdd = 0;
    
    // Input each integer and add based on condition
    cout << "Enter 5 integers separated by space or newline:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> number;
        if (number % 2 == 0) {
            sumEven += number;
        } else {
            sumOdd += number;
        }
    }
    
    // Display the sums
    cout << "\nSum of even integers: " << sumEven << endl;
    cout << "Sum of odd integers: " << sumOdd << endl;
    
    // Extra Info
    cout << "\n======================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S. | DIT 1-3" << endl;
    cout << "======================================\n" << endl;
    return 0;
}

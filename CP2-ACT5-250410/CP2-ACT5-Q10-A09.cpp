#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n======================================" << endl;
    cout << "PROGRAM: Prime Number Checker" << endl;
    cout << "======================================\n" << endl;
    
    int num;
    bool isPrime = true;
    
    // Prompt user to input positive integer
    cout << "Enter a positive integer: ";
    cin >> num;
    
    // Validate use rinput
    if (num <= 1) {
        isPrime = false;
    } else {
        // Check for factors from 2 to sqrt(num)
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    
    // Display whether prime or not
    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    
    // Extra Info
    cout << "\n======================================" << endl;
    cout << "PROGRAMMER: Cuencia, Ricky S. | DIT 1-3" << endl;
    cout << "======================================\n" << endl;
    return 0;
}

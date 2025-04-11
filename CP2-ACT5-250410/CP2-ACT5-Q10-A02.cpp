#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n======================================" << endl;
    cout << "PROGRAM: Sum of First 10 Natural Numbers" << endl;
    cout << "======================================\n" << endl;
    
    int sum = 0;
    // Calculate the sum using a loop
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    
    // Display the result
    cout << "The sum of the first 10 natural numbers is: " << sum << endl;
    
    // Extra Info
    cout << "\n======================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S. | DIT 1-3" << endl;
    cout << "======================================\n" << endl;
    return 0;
}

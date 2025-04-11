#include <iostream>

using namespace std;

int main() {
    // DECLARATION
    int number;

    // HEADER
    cout << "\n:: NUMBER SIGN CHECKER ::" << endl;

    // USER INPUT
    cout << "Enter a number: ";
    cin >> number;
    
    // Check if the number is POSITIVE or NEGATIVE
    if (number >= 0) {
        cout << "POSITIVE" << endl;
    } else {
        cout << "NEGATIVE" << endl;
    }

    return 0;
}

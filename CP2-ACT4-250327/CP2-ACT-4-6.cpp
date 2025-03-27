#include <iostream>

using namespace std;

int main() {
    // DECLARATION (Store user input)
    int number;

    // HEADER (Display title)
    cout << "\n:: ODD OR EVEN CHECKER ::" << endl;
    
    // USER INPUT (Get number from user)
    cout << "Enter a number: ";
    cin >> number;
    
    // CHECK AND DISPLAY (Determine if ODD or EVEN)
    if (number % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }

    return 0;
}

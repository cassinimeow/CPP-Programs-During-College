#include <iostream>

using namespace std;

int main() {
    // DECLARATION (Store user input)
    int monthNumber;

    // HEADER (Display title)
    cout << "\n:: MONTH NAME CHECKER ::" << endl;

    // USER INPUT (Get number from user)
    cout << "Enter a number (1-12): ";
    cin >> monthNumber;
    
    // CHECK AND DISPLAY (Match number to month)
    switch (monthNumber) {
        case 1:  cout << "January" << endl; break;
        case 2:  cout << "February" << endl; break;
        case 3:  cout << "March" << endl; break;
        case 4:  cout << "April" << endl; break;
        case 5:  cout << "May" << endl; break;
        case 6:  cout << "June" << endl; break;
        case 7:  cout << "July" << endl; break;
        case 8:  cout << "August" << endl; break;
        case 9:  cout << "September" << endl; break;
        case 10: cout << "October" << endl; break;
        case 11: cout << "November" << endl; break;
        case 12: cout << "December" << endl; break;
        default: cout << "Invalid! Enter 1-12." << endl; // Handle invalid input
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    // DECLARATION (Store user input)
    char grade;

    // HEADER (Display title and reference table)
    cout << "\n:: GRADE CONVERTER ::" << endl;
    cout << "================================" << endl;
    cout << "| Letter Grade | Message       |" << endl;
    cout << "|--------------|---------------|" << endl;
    cout << "| A            | Excellent     |" << endl;
    cout << "| B            | Above Average |" << endl;
    cout << "| C            | Average       |" << endl;
    cout << "| D            | Below Average |" << endl;
    cout << "| F            | Failed        |" << endl;
    cout << "================================" << endl;
    
    // USER INPUT (Get letter grade)
    cout << "Enter Letter Grade (A-F): ";
    cin >> grade;
    
    // CHECK AND DISPLAY (Convert letter grade to message)
    switch (toupper(grade)) {
        case 'A':
            cout << "Message: Excellent" << endl;
            break;
        case 'B':
            cout << "Message: Above Average" << endl;
            break;
        case 'C':
            cout << "Message: Average" << endl;
            break;
        case 'D':
            cout << "Message: Below Average" << endl;
            break;
        case 'F':
            cout << "Message: Failed" << endl;
            break;
        default:
            cout << "Message: Invalid Grade! " << endl;
    }
    
    return 0;
}

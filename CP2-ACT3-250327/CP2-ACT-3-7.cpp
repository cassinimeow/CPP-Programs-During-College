#include <iostream>

using namespace std;

int main() {
    // DECLARATION (Store user input)
    int age;

    // HEADER (Display title)
    cout << "\n:: VOTING ELIGIBILITY CHECKER ::" << endl;
    
    // USER INPUT (Get age from user)
    cout << "Enter your age: ";
    cin >> age;
    
    // CHECK AND DISPLAY (Determine voting eligibility)
    if (age < 18) {
        cout << "YOU ARE NOT QUALIFIED TO VOTE" << endl;
    } else {
        cout << "YOU ARE QUALIFIED TO VOTE" << endl;
    }

    return 0;
}

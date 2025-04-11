#include <iostream>

using namespace std;

int main() {
    // DECLARATION (Store gender input)
    char gender;

    // USER INPUT (Get gender from user)
    cout << "Enter 'm' for male or 'f' for female: ";
    cin >> gender;
    
    // CHECK AND DISPLAY (Greet based on gender)
    if (gender == 'm' || gender == 'M') {
        cout << "Response: HELLO SIR!" << endl;
    } else {
        cout << "Response: HELLO MADAM!" << endl;
    }

    return 0;
}

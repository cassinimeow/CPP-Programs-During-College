#include <iostream>

using namespace std;

int main() {
    // DECLARATION (Store user input)
    int registrants;
    int fee_per_person, total_fee;

    // HEADER (Display title)
    cout << "\n:: SEMINAR FEE CALCULATOR ::" << endl;
    cout << "==========================================" << endl;
    cout << "| Number of Registrants | Fee per Person |" << endl;
    cout << "|-----------------------|----------------|" << endl;
    cout << "| 1 - 4                 |  500 PHP       |" << endl;
    cout << "| 5 - 10                |  400 PHP       |" << endl;
    cout << "| 11 or more            |  300 PHP       |" << endl;
    cout << "==========================================\n" << endl;
    
    // USER INPUT (Get number of registrants)
    cout << "Enter the number of registrants: ";
    cin >> registrants;
    
    // CHECK AND DISPLAY (Determine fee per person and total amount)
    if (registrants <= 0) {
        cout << "Invalid input. Number of registrants must be at least 1." << endl;
    } else {
        if (registrants >= 1 && registrants <= 4) {
            fee_per_person = 500;
        } else if (registrants >= 5 && registrants <= 10) {
            fee_per_person = 400;
        } else {
            fee_per_person = 300;
        }
        total_fee = registrants * fee_per_person;
        cout << "Total amount owed: " << total_fee << " PHP" << endl;
    }

    return 0;
}

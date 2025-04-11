#include <iostream>
#include <cctype>

using namespace std;

int main() {
    // DECLARATION
    char memberStatus;
    float seminarFee;

    // DISPLAY TABLE
    cout << "=================================" << endl;
    cout << "|        SEMINAR MEMBERSHIP      |" << endl;
    cout << "=================================" << endl;
    cout << "  S = 60 yrs old and above" << endl;
    cout << "  M = less than 60 yrs old" << endl;
    cout << "  N = non-member" << endl;
    cout << "=================================" << endl;

    // USER INPUT
    cout << "\n> Enter member status: ";
    cin >> memberStatus;

    // PROCESS AND DISPLAY
    switch (toupper(memberStatus)) {
        case 'S':
            seminarFee = 5;
            cout << "> You're 60 yrs old and above" << endl;
            break;
            case 'M':
            seminarFee = 10;
            cout << "> You're less than 60 yrs old" << endl;
            break;
            case 'N':
            seminarFee = 20;
            cout << "> You're a non-member" << endl;
            break;
        default:
            cout << "> Input Error";
            seminarFee = 0;
    }
    
    if (seminarFee > 0) cout << "Member Fee: " << seminarFee << " PHP" << endl;

    cout << "\n\nPROGRAMMER'S NAME: CUENZA, RICKY S." << endl;
    return 0;
}

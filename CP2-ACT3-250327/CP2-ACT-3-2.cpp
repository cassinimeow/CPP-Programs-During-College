#include <iostream>
using namespace std;
int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 5 == 0) {
        cout << "DIVISIBLE" << endl;
    } else {
        cout << "NOT DIVISIBLE" << endl;
    }

    return 0;
}

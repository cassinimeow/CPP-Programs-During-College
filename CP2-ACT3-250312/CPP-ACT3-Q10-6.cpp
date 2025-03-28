#include <iostream>

using namespace std;

int main() {
    // VARIABLE DECLARATION AND INITIALIZATION
    int num1 = 0, num2 = 0;

    // USER INPUT - get two numbers
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;

    // DISPLAY USER INPUT
    cout << "Original arrangement: " << num1 << " " << num2 << endl;

    // DISPLAY THE SWAPPED ARRANGEMENT
    cout << "Swapped arrangement: " << num2 << " " << num1 << endl;

    return 0;
}

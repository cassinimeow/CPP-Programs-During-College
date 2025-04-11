#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // VARIABLE DECLARATION AND INITIALIZATION
    float number = 0.0, footToInch = 0.0;
    const float footInInch = 12.0;

    // USER INPUT
    cout << "Enter a number (ft): ";
    cin >> number;

    // PROCESS
    footToInch = number * footInInch;

    // DISPLAY ON CONSOLE
    cout << fixed << setprecision(2);
    cout << number << " ft is " << footToInch << " inches" << endl;

    return 0;
}

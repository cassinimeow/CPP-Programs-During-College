#include <iostream>

using namespace std;

int main() {
    // DECLARATION (Store temperature input)
    int temperature;

    // HEADER (Display title)
    cout << "\n::  TEMPERATURE CLASSIFIER   ::" << endl;
    cout << "---------------------------------" << endl;
    cout << "| Temperature    | Remarks      |" << endl;
    cout << "---------------------------------" << endl;
    cout << "| < 0           | ICE          |" << endl;
    cout << "| 0 - 100       | WATER        |" << endl;
    cout << "| > 100         | STEAM        |" << endl;
    cout << "---------------------------------\n";

    // USER INPUT (Get temperature from user)
    cout << "Enter temperature: ";
    cin >> temperature;
    
    // CHECK AND DISPLAY (Classify temperature)
    if (temperature < 0) {
        cout << "ICE" << endl;
    } else if (temperature <= 100) {
        cout << "WATER" << endl;
    } else {
        cout << "STEAM" << endl;
    }

    return 0;
}

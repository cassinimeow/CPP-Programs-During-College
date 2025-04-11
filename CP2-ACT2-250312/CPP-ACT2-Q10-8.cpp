#include <iostream>

using namespace std;

int main() {
    // VARIABLE DECLARATION AND INITIALIZATION
    float length = 0.0, width = 0.0, area = 0.0, perimeter = 0.0;

    // DISPLAY HEADING
    cout << "### AREA & PERIMETER OF A RECTANGLE CALCULATOR ###" << endl;

    // USER INPUT
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    // PROCESS
    area = length * width;
    perimeter = 2 * (length + width);

    // DISPLAY RESULT ON CONSOLE
    cout << "Rectangle (Area): " << area << endl;
    cout << "Rectangle (Perimeter): " << perimeter << endl;

    return 0;
}

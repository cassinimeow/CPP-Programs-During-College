#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // VARIABLE DECLARATION AND INITIALIZATION
    float prelimTerm = 85.0, midTerm = 93.0, finalTerm = 87.0, averageGrade = 0.0;

    // PROCESS - calculation of average grade
    averageGrade = (prelimTerm + midTerm + finalTerm) / 3;

    // DISPLAY ON CONSOLE - result of calculated average grade
    cout << "Preliminary Grade: " << prelimTerm << endl;
    cout << "Midterm Grade: " << midTerm << endl;
    cout << "Final Grade: " << finalTerm << endl;
    cout << "Average Grade: " << fixed << setprecision(2) << averageGrade << endl;

    return 0;
}

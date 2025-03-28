#include <iostream>
#include <string>

using namespace std;

int main() {
    // VARIABLE DECLARATION AND INITIALIZATION
    string workerName = "Juan Dela Cruz";
    int hoursWorked = 40;
    double rate = 215.75, grosspay = 0.0;

    // PROCESS - Calculate the gross pay
    grosspay = hoursWorked * rate;

    // DISPLAY ON CONSOLE
    cout << "Worker Name: " << workerName << endl;
    cout << "Hours Worked: " << hoursWorked << " hours" << endl;
    cout << "Rate: " << rate << endl;
    cout << "Gross Pay: " << grosspay << " PHP" << endl;

    return 0;
}

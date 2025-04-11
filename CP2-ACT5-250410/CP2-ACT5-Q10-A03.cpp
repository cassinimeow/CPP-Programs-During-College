#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n======================================" << endl;
    cout << "PROGRAM: Print Name 50 Times" << endl;
    cout << "======================================\n" << endl;
    
    // Declare and initialize my name
    string name = "Ricky";

    // Loop to print the name 50 times
    for (int i = 1; i <= 50; i++) {
        cout << i << ". " << name << endl;
    }
    
    // Extra Info
    cout << "\n======================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S. | DIT 1-3" << endl;
    cout << "======================================\n" << endl;
    return 0;
}

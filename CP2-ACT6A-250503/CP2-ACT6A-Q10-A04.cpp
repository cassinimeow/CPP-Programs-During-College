#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n========================================================================" << endl;
    cout << "PROGRAM: String Array of Cars" << endl;
    cout << "========================================================================" << endl;

    // Declaration and Initialization of Variables
    string cars[] = {"Toyota","Honda","Ford","BMW","Audi"};
    int lengthCars = sizeof(cars) / sizeof(cars[0]);

    // Display
    cout << "\nCars Array: ";
    for(int i=0; i<lengthCars; i++){
        cout << cars[i] << " ";
    }
    cout << endl;

    // Footer
    cout << "\n========================================================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S.  |  DIT 1-3" << endl;
    cout << "========================================================================\n" << endl;
    return 0;
}

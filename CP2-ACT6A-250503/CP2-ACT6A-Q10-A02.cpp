#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n========================================================================" << endl;
    cout << "PROGRAM: Sum of Array Values" << endl;
    cout << "========================================================================" << endl;

    // Declaration and Initialization of Variables
    int arrayNum[] = {2,4,6,8,10,12,14,16,18,20};
    int lengthNum = sizeof(arrayNum) / sizeof(arrayNum[0]);
    int sum = 0;

    // Display & Compute
    cout << "\nArray: ";
    for(int i=0; i<lengthNum; i++){
        cout << arrayNum[i] << " ";
        sum += arrayNum[i];
    }
    cout << endl;

    // Output
    cout << "\nSum of Values: " << sum << endl;

    // Footer
    cout << "\n========================================================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S.  |  DIT 1-3" << endl;
    cout << "========================================================================\n" << endl;
    return 0;
}

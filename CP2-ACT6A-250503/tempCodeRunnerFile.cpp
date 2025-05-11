#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n========================================================================" << endl;
    cout << "PROGRAM: Average of Array Values" << endl;
    cout << "========================================================================" << endl;

    // Declaration and Initialization of Variables
    int arrayNum[] = {5,10,15,20,25,30,35,40};
    int lengthNum = sizeof(arrayNum) / sizeof(arrayNum[0]);
    float sum = 0;
    double average;

    // Display & Compute
    cout << "\nArray: ";
    for(int i=0; i<lengthNum; i++){
        cout << arrayNum[i] << " ";
        sum += arrayNum[i];
    }
    cout << endl;
    average = sum / lengthNum;

    // Output
    cout << "\nAverage Value: " << average << endl;

    // Footer
    cout << "\n========================================================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S.  |  DIT 1-3" << endl;
    cout << "========================================================================\n" << endl;
    return 0;
}

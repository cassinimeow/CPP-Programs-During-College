#include <iostream>

using namespace std;    

int main() {
    // Headers
    cout << "\n========================================================================" << endl;
    cout << "PROGRAM: Numeric and String Array Sorter" << endl;
    cout << "========================================================================" << endl;

    
    // Declaration and Initialization of Variables
    int arrayNum[] = {3, 6, 9, 2, 5, 8, 1, 4, 7, 0};
    string arrayStr[] = {"J", "F", "A", "I", "D", "C", "G", "E", "B", "H"};

    int lengthNum = sizeof(arrayNum) / sizeof(arrayNum[0]);
    int lengthStr = sizeof(arrayStr) / sizeof(arrayStr[0]);
    
    int tempNum;
    string tempStr;


    // Display
    cout << "\nNumeric Array: ";
    for (int i = 0; i < lengthNum; i++) {
        cout << arrayNum[i] << " ";
    }
    cout << endl;
    
    cout << "String Array: ";
    for (int i = 0; i < lengthStr; i++) {
        cout << arrayStr[i] << " ";
    }
    cout << endl;


    // Sort
    for (int i = 0; i < lengthNum; i++) {
        for (int j = i + 1; j < lengthNum; j++) {
            if (arrayNum[i] > arrayNum[j]) {
                tempNum = arrayNum[i];
                arrayNum[i] = arrayNum[j];
                arrayNum[j] = tempNum;
            }
        }
    }

    for (int i = 0; i < lengthStr; i++) {
        for (int j = i + 1; j < lengthStr; j++) {
            if (arrayStr[i] > arrayStr[j]) {
                tempStr = arrayStr[i];
                arrayStr[i] = arrayStr[j];
                arrayStr[j] = tempStr;
            }
        }
    }


    // Output
    cout << "\nSorted Numeric Array: ";
    for (int i = 0; i < lengthNum; i++) {
        cout << arrayNum[i] << " ";
    }
    cout << endl;
    
    cout << "Sorted String Array: ";
    for (int i = 0; i < lengthStr; i++) {
        cout << arrayStr[i] << " ";
    }
    cout << endl;
    

    // Footer
    cout << "\n========================================================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S.  |  DIT 1-3" << endl;
    cout << "========================================================================\n" << endl;
    return 0;
}
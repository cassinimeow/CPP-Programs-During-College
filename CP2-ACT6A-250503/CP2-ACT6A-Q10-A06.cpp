#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n========================================================================" << endl;
    cout << "PROGRAM: Search Number Location" << endl;
    cout << "========================================================================" << endl;

    // Declaration and Initialization of Variables
    int nums[1][5];
    cout << "\nEnter 5 numbers:\n";
    for(int j=0; j<5; j++){
        cout << "Number " << j+1 << ": ";
        cin >> nums[0][j];
    }
    int target;
    cout << "\nEnter number to search for: ";
    cin >> target;
    bool found = false;

    // Compute
    for(int j=0; j<5; j++){
        if(nums[0][j] == target){
            cout << "\nNumber found at position: " << j+1 << endl;
            found = true;
            break;
        }
    }

    // Output
    if(!found){
        cout << "\nNumber not found in the list." << endl;
    }

    // Footer
    cout << "\n========================================================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S.  |  DIT 1-3" << endl;
    cout << "========================================================================\n" << endl;
    return 0;
}

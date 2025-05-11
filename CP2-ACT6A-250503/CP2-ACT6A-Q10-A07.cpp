#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n========================================================================" << endl;
    cout << "PROGRAM: Biggest and Smallest Number" << endl;
    cout << "========================================================================" << endl;

    // Declaration and Initialization of Variables
    int nums[1][5];
    cout << "\nEnter 5 numbers:\n";
    for(int j=0; j<5; j++){
        cout << "Number " << j+1 << ": ";
        cin >> nums[0][j];
    }
    int biggest = nums[0][0];
    int smallest = nums[0][0];

    // Compute
    for(int j=1; j<5; j++){
        if(nums[0][j] > biggest)   biggest = nums[0][j];
        if(nums[0][j] < smallest)  smallest = nums[0][j];
    }

    // Output
    cout << "\nBiggest Number:  " << biggest << endl;
    cout << "Smallest Number: " << smallest << endl;

    // Footer
    cout << "\n========================================================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S.  |  DIT 1-3" << endl;
    cout << "========================================================================\n\n\n" << endl;
    return 0;
}

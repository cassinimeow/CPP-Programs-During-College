#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n========================================================================" << endl;
    cout << "PROGRAM: Second-Highest Number" << endl;
    cout << "========================================================================" << endl;

    // Declaration and Initialization of Variables
    int nums[5];
    cout << "\nEnter 5 numbers:\n";
    for(int i=0; i<5; i++){
        cout << "Number " << i+1 << ": ";
        cin >> nums[i];
    }
    int highest = nums[0];
    int second  = nums[0];

    // Compute
    for(int i=1; i<5; i++){
        if(nums[i] > highest){
            second  = highest;
            highest = nums[i];
        } else if(nums[i] > second && nums[i] < highest){
            second = nums[i];
        }
    }

    // Output
    cout << "\nThe second-highest number is: " << second << endl;

    // Footer
    cout << "\n========================================================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S.  |  DIT 1-3" << endl;
    cout << "========================================================================\n" << endl;
    return 0;
}

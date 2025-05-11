#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n========================================================================" << endl;
    cout << "PROGRAM: Count Number Occurrences" << endl;
    cout << "========================================================================" << endl;

    // Declaration and Initialization of Variables
    int n;
    cout << "\nHow many items to process? ";
    cin >> n;
    int nums[n];
    cout << "\nEnter " << n << " numbers:\n";
    for(int i=0; i<n; i++){
        cout << "Number " << i+1 << ": ";
        cin >> nums[i];
    }
    int target, count = 0;
    cout << "\nEnter number to count occurrences of: ";
    cin >> target;

    // Compute
    for(int i=0; i<n; i++){
        if(nums[i] == target) count++;
    }

    // Output
    cout << "\nNumber " << target << " occurs " << count << " time(s)." << endl;

    // Footer
    cout << "\n========================================================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S.  |  DIT 1-3" << endl;
    cout << "========================================================================\n" << endl;
    return 0;
}

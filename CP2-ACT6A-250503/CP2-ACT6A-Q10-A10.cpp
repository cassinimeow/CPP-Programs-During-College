#include <iostream>

using namespace std;

int main() {
    // Headers
    cout << "\n========================================================================" << endl;
    cout << "PROGRAM: CJ Marketing Sales Report" << endl;
    cout << "========================================================================" << endl;

    // Declaration and Initialization of Variables
    double sales[12][1];
    const string months[12] = {
        "January","February","March","April","May","June",
        "July","August","September","October","November","December"
    };

    // Input
    for(int m=0; m<12; m++){
        cout << "Enter sales for " << months[m] << ": ";
        cin >> sales[m][0];
    }

    // Compute
    double highest = sales[0][0], lowest = sales[0][0];
    int idxHigh = 0, idxLow = 0;
    for(int m=1; m<12; m++){
        if(sales[m][0] > highest){
            highest = sales[m][0];
            idxHigh = m;
        }
        if(sales[m][0] < lowest){
            lowest = sales[m][0];
            idxLow = m;
        }
    }

    // Output
    cout << "\n\nSales Report:\n";
    for(int m=0; m<12; m++){
        cout << months[m] << ": " << sales[m][0] << endl;
    }
    cout << "\nHighest Sales: " << months[idxHigh] << " with " << highest << endl;
    cout << "Lowest Sales:  " << months[idxLow]  << " with " << lowest << endl;

    // Footer
    cout << "\n========================================================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S.  |  DIT 1-3" << endl;
    cout << "========================================================================\n" << endl;
    return 0;
}

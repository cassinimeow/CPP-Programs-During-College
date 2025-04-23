#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int classCode, noOfDaysRented;
    string customerName, classification;
    double recreationalFee, ratePerDay, bill, totalBill;
    char processAnother;

    int totalCustomers = 0;
    double grandTotalBill = 0.0;
    int customerNo = 1;

    cout << "\n\n\tHIJK Hotel and Restaurant\n";
    cout << "\t Roxas Boulevard, Manila\n\n";

    do {
    // Input Section
        cout << "Customer Number: " << customerNo << "\n";
    
        cout << "Customer Name: ";
        cin.ignore();
        getline(cin, customerName);
        cout << "Class Code: ";
        cin >> classCode;
        cout << "No. of Days Rented: ";
        cin >> noOfDaysRented;
        cout << "\n";

        switch (classCode) {
            case 1:
                classification = "Single Suite";
                ratePerDay = 2000.00;
                recreationalFee = 1000.00;
                break;
            case 2:
                classification = "Service De Luxe";
                ratePerDay = 2500.00;
                recreationalFee = 1500.00;
                break;
            case 3:
                classification = "Service Premiere";
                ratePerDay = 3000.00;
                recreationalFee = 2000.00;
                break;
            default:
                cout << "Input Error\n";
                return 1;
        }

        bill = noOfDaysRented * ratePerDay;
        totalBill = bill + recreationalFee;

    // Output Section
        cout << "Classification: " << classification << "\n";
        cout << "Recreational Fee: " << fixed << setprecision(2) << recreationalFee << "\n";
        cout << "Rate Per Day: " << fixed << setprecision(2) << ratePerDay << "\n";
        cout << "Total Bill: " << fixed << setprecision(2) << totalBill << "\n\n";
    
    // Total and Incrementation
        grandTotalBill += totalBill;
        totalCustomers++;
        customerNo++;

    // Process Another
        cout << "Process Another (Y/N): ";
        cin >> processAnother;
        cout << "\n";
    } while (processAnother == 'Y' || processAnother == 'y');

    cout << "Total No. of Customers for the Day: " << totalCustomers << "\n";
    cout << "Grand Total Bill: " << fixed << setprecision(2) << grandTotalBill << "\n\n";

    cout << "Programmer's Name: Elizander S. Aguila\n";
    cout << "\n";

    return 0;
}
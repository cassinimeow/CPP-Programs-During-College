#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    // Headers
    cout << "\n========================================================================" << endl;
    cout << "PROGRAM: Hotel and Resto" << endl;
    cout << "========================================================================" << endl;
    

    // Declaration and Initialization of Variables
    char userConfirmation;

    int customerNo = 0,
        classCode = 0,
        noOfDaysRented = 0,
        totalNoOfCustomersForTheDay = 0;
        
        string customerName = "",
        classification = "",
        table = "\nCLASS CODE\tCLASSIFICATION\t\tRATE PER DAY\tRECREATIONAL FEE";
        table += "\n------------------------------------------------------------------------";

    double recreationalFee = 0.0,
        ratePerDay = 0.0,
        bill = 0.0, 
        totalBill = 0.0,
        grandTotalBill = 0.0;

    bool inputError = false;
        
    stringstream precisedString;


    // Display Headings
    cout << "\n\tHIJK HOTEL AND RESTAURANT\n\tROXAS BOULEVARD, MANILA" << endl;


    // User Input
    while (true) {
        customerNo++;
        cout << "\nCUSTOMER NO.\t\t:\t"   ;  cout << customerNo << endl;
        cout << "CUSTOMER NAME\t\t:\t"    ;  cin.ignore(); getline(cin, customerName);
        cout << "CLASS CODE\t\t:\t"       ;  cin >> classCode;

        // Process User Input
        switch (classCode) {
            case 10:
                classification = "SINGLE SUITE";
                recreationalFee = 1000;
                ratePerDay = 2000;
                break;
            case 20:
                classification = "SERV. DE LUXE";
                recreationalFee = 1500;
                ratePerDay = 2500;
                break;
            case 30:
                classification = "SERV. PREMIERE";
                recreationalFee = 2000;
                ratePerDay = 3000;
                break;
            default:
                cout << "\n\t(INVALID INPUT)" << endl;
                inputError = true;
        }

        // Display Result
        if (!inputError) {
            cout << "NO. OF DAYS RENTED\t:\t" ;  cin  >> noOfDaysRented;
            cout << "\nCLASSIFICATION\t\t:\t" ;  cout << classification << endl;
            cout << "RECREATIONAL FEE\t:\t"   ;  cout << recreationalFee << endl;
            cout << "RATE PER DAY\t\t:\t"     ;  cout << ratePerDay << endl;
            bill = noOfDaysRented * ratePerDay;
            totalBill = bill + recreationalFee;
            cout << "TOTAL BILL\t\t:\t"       ;  cout << totalBill << endl;  
            
            
            // Insert into the String
            precisedString << fixed << setprecision(2) << "\n" << classCode << "\t\t" << classification;
            precisedString << fixed << setprecision(2) <<  "\t\t" << ratePerDay << "\t\t" << recreationalFee;
            
            // Add for the summary
            grandTotalBill += totalBill;


            // Record Another Entry
            cout << "\nPROCESS ANOTHER CUSTOMER (Y/N) : ";
            cin >> userConfirmation;
            if (userConfirmation == 'N' || userConfirmation == 'n') break;
        } else {
            precisedString << "\n" << "Other nos.\tInput Error";
            break;
        }
    }

    
    // Display Summary
    cout << "\nTOTAL NO. OF CUSTOMERS FOR THE DAY\t:\t" << customerNo << endl;
    cout << "GRAND TOTAL BILL\t\t\t:\t" << grandTotalBill << endl;
    table += precisedString.str();
    cout << table << endl;


    // Footer
    cout << "\n========================================================================" << endl;
    cout << "PROGRAMMER: Cuenza, Ricky S.  |  DIT 1-3" << endl;
    cout << "========================================================================\n" << endl;
    return 0;
}
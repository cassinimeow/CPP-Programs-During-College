#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // CONSTANTS
    const double principal = 250000.0;  // Deposit amount
    const double rate = 0.12;           // 12% annual interest rate
    const double taxRate = 0.10;        // 10% withholding tax
    int days = 30.0;                    // Deposit period in days
    const double time = days / 365.0;   // Convert 30 days to years

    // CALCULATIONS
    double grossInterest = principal * rate * time;
    double withholdingTax = grossInterest * taxRate;
    double netInterest = grossInterest - withholdingTax;

    // DISPLAY RESULTS
    cout << fixed << setprecision(2);
    cout << "Deposit Amount: " << principal << " PHP" << endl;
    cout << "Interest Rate: " << (rate * 100) << "% for " << days << " days" << endl;
    cout << "Withholding Tax Rate: " << (taxRate * 100) << "%" << endl;
    cout << "Gross Interest: " << grossInterest << " PHP" << endl;
    cout << "Withholding Tax Deducted: " << withholdingTax << " PHP" << endl;
    cout << "Net Interest Received: " << netInterest << " PHP" << endl;

    return 0;
}




#include <iostream>

using namespace std;

// Determining the monthly income of a saleperson by commission schedule
int main() {
    // DECLARATION
    double monthlySales, income;

    // DISPLAY TABLE
    cout << "==============================================================" << endl;
    cout << "\tMONTHLY SALES\t\t\t\tINCOME" << endl;
    cout << "Greater than or equal to 50,000\t\t375 plus 16% of sales" << endl;
    cout << "Less than 50,000 but >= 40,000\t\t350 plus 14% of sales" << endl;
    cout << "Less than 40,000 but >= 30,000\t\t325 plus 12% of sales" << endl;
    cout << "Less than 30,000 but >= 20,000\t\t325 plus 9% of sales" << endl;
    cout << "Less than 20,000 but >= 10,000\t\t325 plus 5% of sales" << endl;
    cout << "Less than 10,000\t\t\t325 plus 3% of sales" << endl;
    cout << "==============================================================" << endl;

    // USER INPUT
    cout << "\n> Enter your monthly sales: ";
    cin >> monthlySales;
    
    // PROCESS AND DISPLAY
    if (monthlySales >= 50000) {
        income = (monthlySales * 0.16) + 375;
    } else if (monthlySales >= 40000) {
        income = (monthlySales * 0.14) + 350;
    } else if (monthlySales >= 30000) {
        income = (monthlySales * 0.12) + 325;
    } else if (monthlySales >= 20000) {
        income = (monthlySales * 0.09) + 300;
    } else if (monthlySales >= 10000) {
        income = (monthlySales * 0.05) + 250;
    } else {
        income = (monthlySales * 0.03) + 200;
    }
    cout << "> Your monthly income is: " << income << " PHP" << endl;
    
    cout << "\n\nPROGRAMMER'S NAME: CUENZA, RICKY S." << endl;
    return 0;
}

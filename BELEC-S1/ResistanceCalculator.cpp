#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double nominal, tol;
    while (true) {
        cout << "Enter nominal value Ω (-1 to exit): ";
        cin >> nominal;
        if (nominal == -1) break;
        cout << "Enter tolerance (%): ";
        cin >> tol;
        double factor = tol / 100.0;
        cout << fixed << setprecision(2)
             << "Min: " << nominal * (1 - factor)
             << " Ω, Max: " << nominal * (1 + factor) << " Ω\n\n";
    }
    return 0;
}

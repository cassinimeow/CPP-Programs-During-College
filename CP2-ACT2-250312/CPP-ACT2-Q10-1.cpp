#include <iostream>

using namespace std;

int main() {
    // DECLARATION AND INITIALIZATION
    double dollar = 4.0, peso = 0.0;
    const double convertionRate = 50.75;

    // DISPLAYING THE PROCESS AND OUTPUT OF CONVERSION BETWEEN DOLLARS AND PESOS
    cout << "1 dollar is equivalent to " << convertionRate << " pesos." << endl;
    cout << "Therefore, " << dollar << " dollars is " << (convertionRate * dollar) << " pesos." << endl;
    cout << dollar << " x " << convertionRate << " = " << (dollar * convertionRate) << endl;

    return 0;
}



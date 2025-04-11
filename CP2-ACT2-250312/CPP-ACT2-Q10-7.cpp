#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // VARIABLE DECLARATION AND INITIALIZATION
    double timeRequired = 0.0, distanceMiles = 5400, speedMPH = 220;

    // PROCESS
    timeRequired = distanceMiles / speedMPH;

    // DISPLAY ON CONSOLE
    cout << "Distance to travel: " << distanceMiles << " miles" << endl;
    cout << "Speed: " << speedMPH << " mph" << endl;

    cout << "Time required: " << fixed << setprecision(2) << timeRequired << " hours";

    return 0;
}

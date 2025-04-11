#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // DECLARATION AND INITIALIZATION - Define constants and variables
    const double pi = 3.141592653589793;
    float volumeOfSphere = 0.0, radius = 0.0;

    // USER INPUT - Ask the user to get value of radius
    cout << "Enter a radius: ";
    cin >> radius;

    // PROCESS - Calculate the volume of the sphere
    volumeOfSphere = (4.0 / 3.0) * pi * (radius * radius * radius);

    // DISPLAY ON CONSOLE - Result of calculated volume
    cout << "The Volume of sphere is: " << fixed << setprecision(2) << volumeOfSphere << endl;

    return 0;
}

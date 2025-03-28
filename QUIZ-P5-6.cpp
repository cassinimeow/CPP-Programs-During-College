#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

//PART 5: AREA PER SQUARE METER IN GIVEN RADIUS IN INCHES
    cout <<"\nPart 5: Area Per Square Meter in Given Radius in Inches\n";

    // Given Radii in Inches
    double radius1 = 1.0;
    double radius2 = 1.5;
    double radius3 = 2.0;
    double radius4 = 2.5;
    double radius5 = 3.0;
    double radius6 = 3.5;

    const double PI = M_PI; // or define it as 3.14159265358979323846

    double a1 = PI * (radius1 * radius1); // calculate area for radius1
    double a2 = PI * (radius2 * radius2); // calculate area for radius2
    double a3 = PI * (radius3 * radius3); // calculate area for radius3
    double a4 = PI * (radius4 * radius4); // calculate area for radius4
    double a5 = PI * (radius5 * radius5); // calculate area for radius5
    double a6 = PI * (radius6 * radius6); // calculate area for radius6

    cout << " Radius (in) | Area (sq in)" << endl;
    cout << "-------------|-------------" << endl;
    cout << setw(10) << radius1 << " | " << setw(10) << a1 << endl;
    cout << setw(10) << radius2 << " | " << setw(10) << a2 << endl;
    cout << setw(10) << radius3 << " | " << setw(10) << a3 << endl;
    cout << setw(10) << radius4 << " | " << setw(10) << a4 << endl;
    cout << setw(10) << radius5 << " | " << setw(10) << a5 << endl;
    cout << setw(10) << radius6 << " | " << setw(10) << a6 << endl;

//PART 6: EMPLOYEES GROSS PAY, TAXES, MEDICAL BENEFITS AND NET PAY
    cout <<"\nPart 6: Employees Gross Pay and Net Pay\n";

    const double HOURLY_RATE_EMPLOYEE1 = 16.43;
    const double HOURLY_RATE_EMPLOYEE2 = 12.67;
    const double TAX_WITHHOLDING_RATE = 0.20;
    const double MEDICAL_BENEFITS_RATE = 0.02;
    const int HOURS_WORKED_PER_WEEK1 = 40;
    const int HOURS_WORKED_PER_WEEK2 = 35;

    // Calculate gross pay for each employee
    double grossPayEmployee1 = HOURLY_RATE_EMPLOYEE1 * HOURS_WORKED_PER_WEEK1;
    double grossPayEmployee2 = HOURLY_RATE_EMPLOYEE2 * HOURS_WORKED_PER_WEEK2;

    // Calculate taxes withheld for each employee
    double taxesWithheldEmployee1 = grossPayEmployee1 * TAX_WITHHOLDING_RATE;
    double taxesWithheldEmployee2 = grossPayEmployee2 * TAX_WITHHOLDING_RATE;

    // Calculate medical benefits for each employee
    double medicalBenefitsEmployee1 = grossPayEmployee1 * MEDICAL_BENEFITS_RATE;
    double medicalBenefitsEmployee2 = grossPayEmployee2 * MEDICAL_BENEFITS_RATE;

    // Calculate net pay for each employee
    double netPayEmployee1 = grossPayEmployee1 - (taxesWithheldEmployee1 + medicalBenefitsEmployee1);
    double netPayEmployee2 = grossPayEmployee2 - (taxesWithheldEmployee2 + medicalBenefitsEmployee2);

    // Display results
    cout << "Employee 1:" << endl;
    cout << "  Gross Pay: $" << fixed << setprecision(2) << grossPayEmployee1 << endl;
    cout << "  Net Pay: $" << fixed << setprecision(2) << netPayEmployee1 << endl;

    cout << endl;

    cout << "Employee 2:" << endl;
    cout << "  Gross Pay: $" << fixed << setprecision(2) << grossPayEmployee2 << endl;
    cout << "  Net Pay: $" << fixed << setprecision(2) << netPayEmployee2 << endl;

    cout << "\nPROGRAMMER'S NAME: ELIZANDER S. AGUILA" << endl;

    return 0;
}
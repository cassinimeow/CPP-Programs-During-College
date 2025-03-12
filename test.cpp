#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 1️⃣ Convert Dollars to Pesos
    cout << "Problem 1: Convert Dollars to Pesos" << endl;
    double dollars, pesos;
    const double EXCHANGE_RATE = 50.75;

    cout << "Enter amount in dollars: ";
    cin >> dollars;
    pesos = dollars * EXCHANGE_RATE;
    cout << dollars << " USD is equivalent to " << pesos << " PHP." << endl;
    cout << "------------------------------------\n" << endl;

    // 2️⃣ Volume of a Sphere
    cout << "Problem 2: Volume of a Sphere" << endl;
    double radius, volume;
    const double PI = 3.1416;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    volume = (4.0 / 3.0) * PI * pow(radius, 3);
    cout << "Volume of the sphere: " << volume << " cubic units" << endl;
    cout << "------------------------------------\n" << endl;

    // 3️⃣ Compute Gross Pay
    cout << "Problem 3: Compute Gross Pay" << endl;
    const double HOURS_WORKED = 40, RATE_PER_HOUR = 215.75;
    double grossPay = HOURS_WORKED * RATE_PER_HOUR;
    cout << "Juan Dela Cruz's Gross Pay: PHP " << grossPay << endl;
    cout << "------------------------------------\n" << endl;

    // 4️⃣ Compute Sum and Product
    cout << "Problem 4: Sum and Product" << endl;
    double num1, num2, sum, product;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    sum = num1 + num2;
    product = num1 * num2;
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "------------------------------------\n" << endl;

    // 5️⃣ Compute Average Grade
    cout << "Problem 5: Compute Average Grade" << endl;
    const double PRELIM = 85, MIDTERM = 93, FINAL = 87;
    double average = (PRELIM + MIDTERM + FINAL) / 3.0;
    cout << "Student's Average Grade: " << average << endl;
    cout << "------------------------------------\n" << endl;

    // 6️⃣ Swap Two Numbers
    cout << "Problem 6: Swap Two Numbers" << endl;
    double a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping:\nFirst number: " << a << "\nSecond number: " << b << endl;
    cout << "------------------------------------\n" << endl;

    // 7️⃣ Compute Travel Time
    cout << "Problem 7: Compute Travel Time" << endl;
    const double DISTANCE = 5400, SPEED = 220;
    double time = DISTANCE / SPEED;
    cout << "Time required to travel 5400 miles at 220 mph: " << time << " hours" << endl;
    cout << "------------------------------------\n" << endl;

    // 8️⃣ Compute Area and Perimeter of a Rectangle
    cout << "Problem 8: Compute Area and Perimeter" << endl;
    double length, width, area, perimeter;

    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    area = length * width;
    perimeter = 2 * (length + width);
    cout << "Area: " << area << " square units" << endl;
    cout << "Perimeter: " << perimeter << " units" << endl;
    cout << "------------------------------------\n" << endl;

    // 9️⃣ Convert Feet to Inches
    cout << "Problem 9: Convert Feet to Inches" << endl;
    double feet, inches;
    const double INCHES_PER_FOOT = 12;

    cout << "Enter value in feet: ";
    cin >> feet;
    inches = feet * INCHES_PER_FOOT;
    cout << feet << " feet is " << inches << " inches" << endl;
    cout << "------------------------------------\n" << endl;

    // 🔟 Compute Interest and Withholding Tax
    cout << "Problem 10: Compute Interest and Withholding Tax" << endl;
    const double PRINCIPAL = 250000, RATE = 0.12, TIME = 30.0 / 365.0, TAX_RATE = 0.10;
    double interest = PRINCIPAL * RATE * TIME;
    double withholdingTax = interest * TAX_RATE;
    double netInterest = interest - withholdingTax;

    cout << "Interest Earned: PHP " << interest << endl;
    cout << "Withholding Tax: PHP " << withholdingTax << endl;
    cout << "Net Interest: PHP " << netInterest << endl;
    cout << "------------------------------------\n" << endl;

    return 0;
}

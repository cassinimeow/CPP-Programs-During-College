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

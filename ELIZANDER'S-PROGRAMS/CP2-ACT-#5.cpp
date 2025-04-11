#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
// 1️⃣ Printing numbers 1-10
    cout << "Problem 1: Printing numbers 1-10\n" << endl;
    int i;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Numbers: " << i <<endl;
    }

    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;

// 2️⃣ Sum of first 10 numbers
    cout << "\nProblem 2: Sum of first 10 numbers\n" << endl;
    int num;
    int sum = 0;

    cout << "Sum of first 10 numbers: ";
    cin >> num;

    while (num >= 0)
    {
        sum += num;
        cout << "Enter your another number: ";
        cin >> num;
    }
    
    cout << "\nSum of first 10 numbers: " << sum << "\n" << endl;
    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;

// 3️⃣ Display my name 50 times
    cout << "Problem 3: Display my name 50 times\n" << endl;
    string name = "Elizander S. Aguila";

    for (int i = 1; i <= 50; i++)
    {
        cout << i << " Name: " << name << endl;
    }

// 4️⃣ Dislay the Multiplication Table of a Number
    cout << "\nProblem 4: Display the Multiplication Table of a Number\n" << endl;
    int num1, mult;

    cout << "Enter a Positive Integer: ";
    cin >> num1;

    for (mult = 1; mult <= 10; mult++)
    {
        cout << num1 << " x " << mult << " = " << num1 * mult << endl;
    }

    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;

// 5️⃣ Display the Factorial Value of a Number
    cout << "\nProblem 5: Display the Factorial Value of a Number\n" << endl;
    double num2;
    int fact = 1;

    cout << "Enter a number: ";
    cin >> num2;

    for (int i = 1; i <= num2; i++)
    {
        fact *= i;
    }

    cout << "\nFactorial of " << num2  << " is: " << fact << endl;
    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;

// 6️⃣ Display the number that was raised by your 2nd input number
    cout << "\nProblem 6: Display the number that was raised by your 2nd input number\n" << endl;
    int num3, num4, raised = 1;

    cout << "Enter a number: ";
    cin >> num3;

    cout << "Enter another number: ";
    cin >> num4;

    for (int i = 1; i <= num4; i++)
    {
        raised *= num3;
    }

    cout << "\n" << num3 << " raised by " << num4 << " is: " << raised << endl;
    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;

// 7️⃣ Display the number reversed
    cout << "\nProblem 7: Display the number reversed\n" << endl;
    string es = "";
    string s;

    cout << "Enter the numbers: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        es = s[i] + es;
    }

    cout << "\nReversed numbers: " << es << endl;
    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;

// 8️⃣ Display sum of the end digits of a even and odd number
    cout << "\nProblem 8: Display sum of the end digits of a even and odd number\n" << endl;
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    int sumEnd = 0;
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < n; i++) {
        int num5;
        cout << "Enter integer " << i + 1 << ": ";
        cin >> num5;

        if (i == 0 || i == n - 1) {
            sumEnd += num5;
        }

        if (num5 % 2 == 0) {
            sumEven += num5;
        } else {
            sumOdd += num5;
        }
    }

    cout << "\nSum of end integers: " << sumEnd << endl;
    cout << "Sum of even integers: " << sumEven << endl;
    cout << "Sum of odd integers: " << sumOdd << endl;
    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;

// 9️⃣ Inputs a Positive Integer and checks if its a Prime Number
    cout << "\nProblem 9: Inputs a Positive Integer and checks if its a Prime Number\n" << endl;
    int num6;

    cout << "Enter a Positive Integer: ";
    cin >> num6;

    if (num6 <= 1) {
        cout << num6 << " is not a Prime Number" << endl;
    } else {
        bool prime = true;
        for (int i = 2; i < num6; i++) {
            if (num6 % i == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            cout << num6 << " is a Prime Number" << endl;
        } else {
            cout << num6 << " is not a Prime Number" << endl;
        }
    }

    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;

// 🔟 Do While Loop program that displays the Sum of Two Numbers and ask the user if they want to run the program again
    cout << "\nProblem 10: Do While Loop program that displays the Sum of Two Numbers and ask the user if they want to run the program again\n" << endl;
    int num7, num8, sum2 = 0;
    char choice;

    do {
        cout << "Enter a Positive Integer: ";
        cin >> num7;
        cout << "Enter another Positive Integer: ";
        cin >> num8;
        sum2 = num7 + num8;
        cout << "Sum of " << num7 << " and " << num8 << " is: " << sum2 << endl;
        cout << "Do you want to run the program again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main () {

//1️⃣ Check if a Number is Positive or Negative
    cout << "Problem 1: Check if a Number is Positive or Negative\n" << endl;

    double number1;

    cout << "Enter a number: ";
    cin >> number1;

    if (number1 > 0) {
        cout << "The number is positive.\n" << endl;
    } else if (number1 < 0) {
        cout << "The number is negative.\n" << endl;
    }

    cout << "Programmer's Name: Elizander S. Aguila\n" << endl;

//2️⃣ Check if a Number is Divisible by 5
    cout << "Problem 2: Check if a Number is Divisible by 5\n" << endl;

    int number2;

    cout << "Enter a number: ";
    cin >> number2;

    if (number2 % 5 == 0) {
        cout << "The number is divisible by 5.\n" << endl;
    } else {
        cout << "The number is not divisible by 5.\n" << endl;
    }

    cout << "Programmer's Name: Elizander S. Aguila\n" << endl;

//3️  Display Months when you input a Number
    cout << "Problem 3: Display Months when you input a Number\n" << endl;

    int number3;
    cout << "Enter a number between 1 and 12: ";
    cin >> number3;

    if (number3 == 1) {
        cout << "Month: January\n" << endl;
    } else if (number3 == 2) {
        cout << "Month: February\n" << endl;
    } else if (number3 == 3) {
        cout << "Month: March\n" << endl;
    } else if (number3 == 4) {
        cout << "Month: April\n" << endl;
    } else if (number3 == 5) {
        cout << "Month: May\n" << endl;
    } else if (number3 == 6) {
        cout << "Month: June\n" << endl;
    } else if (number3 == 7) {
        cout << "Month: July\n" << endl;
    } else if (number3 == 8) {
        cout << "Month: August\n" << endl;
    } else if (number3 == 9) {
        cout << "Month: September\n" << endl;
    } else if (number3 == 10) {
        cout << "Month: October\n" << endl;
    } else if (number3 == 11) {
        cout << "Month: November\n" << endl;
    } else if (number3 == 12) {
        cout << "Month: December\n" << endl;
    }

    cout << "Programmer's Name: Elizander S. Aguila\n" << endl;

//4️⃣ Program that checks the Temperature
    cout << "Problem 4: Program that checks the Temperature\n" << endl;

    double temp;

    cout << "Enter the temperature in Celsius: ";
    cin >> temp;

    if (temp > 100) {
        cout << "STEAM!\n" << endl;
    } else if (temp > 1) {
        cout << "WATER!\n" << endl;
    } else if (temp < 0) {
        cout << "ICE!\n" << endl;
    }

    cout << "Programmer's Name: Elizander S. Aguila\n" << endl;

//5️⃣ Program that displays Hello Sir and Hello Madam!
    cout << "Problem 5: Program that displays Hello Maam and Hello Sir!\n" << endl;

    string letter;

    cout << "Enter a letter: ";
    cin >> letter;

    if (letter == "m" || letter == "M") {
        cout << "Hello Sir!\n" << endl;
    } else if (letter == "f" || letter == "F") {
        cout << "Hello Madam!\n" << endl;
    }

    cout << "Programmer's Name: Elizander S. Aguila\n" << endl;

//6️⃣ Program that displays even or odd
    cout << "Problem 6: Program that displays even or odd\n" << endl;

    int number4;

    cout << "Enter a number: ";
    cin >> number4;

    if (number4 % 2 == 0) {
        cout << "The number is even.\n" << endl;
    } else {
        cout << "The number is odd.\n" << endl;
    }

    cout << "Programmer's Name: Elizander S. Aguila\n" << endl;

//7️⃣ Program that displays if you're qualified to vote
    cout << "Problem 7: Program that displays if you're qualified to vote\n" << endl;

    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are qualified to vote.\n" << endl;
    } else {
        cout << "You are not qualified to vote.\n" << endl;
    }

    cout << "Programmer's Name: Elizander S. Aguila\n" << endl;

//8️⃣ Program that displays the fee per person
    cout << "Problem 8: Program that displays the fee per person\n" << endl;

    int numberOfregistrants;

    cout << "Enter the number of people: ";
    cin >> numberOfregistrants;

    if (numberOfregistrants >= 11) {
        cout << "The fee per person is: 300 pesos.\n" << endl;
    } else if (numberOfregistrants == 5 || numberOfregistrants <= 10) {
        cout << "The fee per person is: 400 pesos.\n" << endl;
    } else if (numberOfregistrants == 1 || numberOfregistrants <= 4) {
        cout << "The fee per person is: 500 pesos.\n" << endl;
    } else {
        cout <<"Invalid number of people.\n" << endl;
    }

    cout << "Programmer's Name: Elizander S. Aguila\n" << endl;

//9️⃣ Program that displays the price based on product ID
    cout << "Problem 9: Program that displays the price based on product ID\n" << endl;

    int productID;

    cout << "Enter the product ID: ";
    cin >> productID;

    switch (productID)
    {
    case 1:
        cout << "The price is: 50.55 pesos.\n" << endl;
        break;
    case 2:
        cout << "The price is: 12.35 pesos.\n" << endl;
        break;
    case 5:
        cout << "The price is: 11.46 pesos.\n" << endl;
        break;
    case 7:
        cout << "The price is: 11.46 pesos.\n" << endl;
        break;
    case 9:
        cout << "The price is: 12.35 pesos.\n" << endl;
        break;
    case 11:
        cout << "The price is: 11.46 pesos.\n" << endl;
        break;
    default:
        cout << "Invalid product ID.\n" << endl;
        break;
    }

    cout << "Programmer's Name: Elizander S. Aguila\n" << endl;

//🔟 Program that display the remarks from the converted letter grade
    cout << "Problem 10: Program that display the remarks from the converted letter grade\n" << endl;

    char letterGrade;

    cout << "Enter the letter grade: ";
    cin >> letterGrade;

    if (letterGrade == 'a' || letterGrade == 'A') {
        cout << "EXCELLENT!\n" << endl;
    } else if (letterGrade == 'b' || letterGrade == 'B') {
        cout << "ABOVE EXCELLENT!\n" << endl;
    } else if (letterGrade == 'c' || letterGrade == 'C') {
        cout << "AVERAGE!\n" << endl;
    } else if (letterGrade == 'd' || letterGrade == 'D') {
        cout << "BELOW AVERAGE!\n" << endl;
    } else if (letterGrade == 'f' || letterGrade == 'F') {
        cout << "FAILED!\n" << endl;
    } else {
        cout << "Invalid letter grade.\n" << endl;
    }

    cout << "Programmer's Name: Elizander S. Aguila\n" << endl;

    return 0;
}
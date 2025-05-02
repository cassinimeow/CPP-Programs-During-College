#include <iostream>
#include <string>
using namespace std;

// 2️⃣ Sum of numbers of an array
void sumOfArray() {
    cout << "\n\nProblem 2: Sum of numbers of an array\n" << endl;
    int num1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum1 = 0;
    for (int i = 0; i < 10; i++) {
        sum1 += num1[i];
    }
    cout << "Sum of numbers of an array: " << sum1;
    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;
}

// 3️⃣ Calculate average value of an array elements
void averageOfArray() {
    cout << "\n\nProblem 3: Calculate average value of an array elements\n" << endl;
    double num2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double sum2 = 0;
    double count = 0;
    for (const double &n : num2) {
        cout << n << " ";
        sum2 += n;
        count++;
    }
    cout << "\n\nAverage value of an array elements: " << sum2 / count;
}

// 4️⃣ Array of Cars
void displayCars() {
    cout << "\n\nProblem 4: Array of Cars\n" << endl;
    string car[] = {"Toyota", "Honda", "Nissan", "Mazda", "Suzuki"};
    for (int i = 0; i < 5; i++) {
        cout << car[i] << " ";
    }
}

// 5️⃣ Find the biggest Number in Two-Dimensional Array
void findBiggestIn2D() {
    cout << "\n\nProblem 5: Find the biggest Number in Two-Dimensional Array\n" << endl;
    const int cols = 5;
    int numbers[1][cols];

    cout << "Enter 5 numbers: \n" << endl;
    for (int i = 0; i < cols; i++) {
        cout << "\tNumber " << i + 1 << ": ";
        cin >> numbers[0][i];
    }

    int maxNum = numbers[0][0];
    for (int i = 1; i < cols; i++) {
        if (numbers[0][i] > maxNum) {
            maxNum = numbers[0][i];
        }
    }

    cout << "\nThe largest number is: " << maxNum << endl;
    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;
}

// 6️⃣ Find your number in a List
void findNumberInList() {
    cout << "\nProblem 6: Find your number in a List\n" << endl;
    const int size = 5;
    int numList[size];

    cout << "Enter 5 numbers: \n" << endl;
    for (int i = 0; i < size; i++) {
        cout << "\tNumber " << i + 1 << ": ";
        cin >> numList[i];
    }

    int searchNum;
    cout << "\nEnter a number to search: ";
    cin >> searchNum;

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (numList[i] == searchNum) {
            cout << "\nNumber " << searchNum << " was found at location " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nNumber " << searchNum << " was not found in the list" << endl;
    }

    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;
}

// 7️⃣ Determine the Smallest and Biggest Numbers
void smallestAndBiggest() {
    cout << "\nProblem 7: Determine the Smallest and Biggest Numbers\n" << endl;
    const int size = 5;
    int values[size];

    cout << "Enter 5 numbers: \n" << endl;
    for (int i = 0; i < size; i++) {
        cout << "\tNumber " << i + 1 << ": ";
        cin >> values[i];
    }

    int maxNum = values[0];
    int minNum = values[0];

    for (int i = 1; i < size; i++) {
        if (values[i] > maxNum) {
            maxNum = values[i];
        } else if (values[i] < minNum) {
            minNum = values[i];
        }
    }

    cout << "\nLargest number: " << maxNum << endl;
    cout << "Smallest number: " << minNum << endl;

    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;
}

// 8️⃣ Count the number of Occurrence
void countOccurrences() {
    cout <<"\n\nProblem 8: Count the number of Occurrence\n" << endl;
    int numItems;
    cout << "Enter the number of items to process: ";
    cin >> numItems;

    int data[numItems];
    cout << "\nEnter a series of " << numItems << " numbers: \n" << endl;
    for (int i = 0; i < numItems; i++) {
        cin >> data[i];
    }

    int targetNum;
    cout << "\nEnter a number to count its occurrences: ";
    cin >> targetNum;

    int count = 0;
    for (int i = 0; i < numItems; i++) {
        if (data[i] == targetNum) {
            count++;
        }
    }

    cout << "\nThe number " << targetNum << " occurs " << count << " times." << endl;
    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;
}

// 9️⃣ Determine the 2nd Highest Number
void secondHighest() {
    cout << "\n\nProblem 9: Determine the 2nd Highest Number\n" << endl;
    const int size = 5;
    int dataSet[size];

    cout << "Enter 5 numbers: \n" << endl;
    for (int i = 0; i < size; i++) {
        cout << "\tNumber " << i + 1 << ": ";
        cin >> dataSet[i];
    }

    int maxNum = dataSet[0];
    int secondMax = dataSet[0];

    for (int i = 1; i < size; i++) {
        if (dataSet[i] > maxNum) {
            secondMax = maxNum;
            maxNum = dataSet[i];
        } else if (dataSet[i] > secondMax && dataSet[i] != maxNum) {
            secondMax = dataSet[i];
        }
    }

    cout << "\nMaximum number: " << maxNum << endl;
    cout << "Second-highest number: " << secondMax << endl;
    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;
}

// 🔟 Sales Report from January to December in CJ Marketing Incorporated
void salesReport() {
    cout << "\n\nProblem 10: Sales Report from January to December in CJ Marketing Incorporated\n" << endl;
    const int months = 12;
    int sales[months];
    string monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    for (int i = 0; i < months; i++) {
        cout << "Enter sales for " << monthNames[i] << ": ";
        cin >> sales[i];
    }

    int highest = sales[0], lowest = sales[0];
    string highMonth = monthNames[0], lowMonth = monthNames[0];

    for (int i = 1; i < months; i++) {
        if (sales[i] > highest) {
            highest = sales[i];
            highMonth = monthNames[i];
        } else if (sales[i] < lowest) {
            lowest = sales[i];
            lowMonth = monthNames[i];
        }
    }

    cout << "\n\tSales Report for CJ Marketing Incorporated:\n";
    for (int i = 0; i < months; i++) {
        cout << "\t" << monthNames[i] << ": " << sales[i] << endl;
    }

    cout << "\nHighest month of sales: " << highMonth << " with sales of " << highest << endl;
    cout << "Lowest month of sales: " << lowMonth << " with sales of " << lowest << endl;
    cout << "\nProgrammer's Name: Elizander S. Aguila" << endl;
}

int main() {
    // 1️⃣ Display numbers using array (left inside main as requested)
    int num[] = {1, 2, 3, 4, 5};
    cout << "\n\nProblem 1: Display numbers using array" << endl;
    for (int i = 0; i < 5; i++) {
        cout << num[i] << " ";
    }

    // Call each function
    sumOfArray();             // 2️⃣
    averageOfArray();         // 3️⃣
    displayCars();            // 4️⃣
    findBiggestIn2D();        // 5️⃣
    findNumberInList();       // 6️⃣
    smallestAndBiggest();     // 7️⃣
    countOccurrences();       // 8️⃣
    secondHighest();          // 9️⃣
    salesReport();            // 🔟

    return 0;
}

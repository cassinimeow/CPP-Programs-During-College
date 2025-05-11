#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    const string lifestyles[4] = {
        "SEDENTARY (SOMEWHAT INACTIVE) PRESS 1",
        "SOMEWHAT ACTIVE (EXERCISE OCCASIONALLY) PRESS 2",
        "ACTIVE (EXERCISE 3-4 DAYS A WEEK) PRESS 3",
        "HIGHLY ACTIVE (EXERCISE EVERYDAY) PRESS 4"
    };
    const double factors[4] = {1.20, 1.30, 1.40, 1.50};

    char repeat;
    do {
        string name;
        int age;
        double weight, height;
        char gender;
        int choice;

        cout << "ENTER YOUR NAME: ";
        getline(cin >> ws, name); 

        cout << "ENTER YOUR AGE: ";
        cin >> age;

        cout << "ENTER YOUR WEIGHT (in pounds): ";
        cin >> weight;

        cout << "ENTER YOUR HEIGHT (in inches): ";
        cin >> height;

        cout << "ENTER YOUR GENDER (M/F): ";
        cin >> gender;

        double bmr;
        if (gender == 'F' || gender == 'f') {
            bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
        } else {
            bmr = 660 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
        }

        cout << fixed << setprecision(2);
        cout << "YOUR BMR IS: " << bmr << "\n\n";

        cout << "\tLIFESTYLE:\n";
        for (int i = 0; i < 4; ++i) {
            cout << "\t    " << lifestyles[i] << "\n";
        }

        cout << "\nENTER YOUR LIFESTYLE: ";
        cin >> choice;
        if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Assuming Sedentary.\n";
            choice = 1;
        }

        double newBmr = bmr * factors[choice - 1];
        cout << "YOUR NEW BMR IS: " << newBmr << "\n\n";

        cout << "PROCESS ANOTHER? (Y/N): ";
        cin >> repeat;
        cout << "\n";

    } while (repeat == 'Y' || repeat == 'y');

    return 0;
}

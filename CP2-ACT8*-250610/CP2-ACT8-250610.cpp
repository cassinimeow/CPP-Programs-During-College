#include <iostream>
#include <string>
using namespace std;

int main() {
    int scores[100][6];
    int student = 0;
    int i, j;

    while (true) {
       cout << "\n------------------------------------------" << endl;
        cout << "\tIntroduction to Programming";
        cout << endl;
        cout << "\nStudent " << (student + 1) << ":\n";

        for (i = 0; i < 6; i++) {
            if (i == 0) {
                cout << "  First Score   (Project 1): ";
            } else if (i < 4) {
                cout << "  Next Score    (Project " << (i + 1) << "): ";
            } else {
                cout << "  Next Score    (Test " << (i - 3) << ")   : ";
            }

            cin >> scores[student][i];

            if (scores[student][i] < 0) {
                cout << "\nProgrammer: Andrea May Christine Tado\n";
                cout << "\n------------------------------------------" << endl;
                return 0;
            }
        }

        int total = 0;
        for (j = 0; j < 6; j++) {
            total += scores[student][j];
        }

 
        char grade;
        if (total >= 360) grade = 'A';
        else if (total >= 320) grade = 'B';
        else if (total >= 280) grade = 'C';
        else if (total >= 240) grade = 'D';
        else grade = 'F';

  
        cout << "\n  Total Points Earned: " << total << endl;
        cout << "  Grade              : " << grade << "\n" << endl;

        student++;
    }

    return 0;
}
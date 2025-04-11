
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
#include <iostream>

using namespace std;

int main() {

    string charSet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ .,?";
    // string message = "", newMessage = "";
    // string message = "SNOW LOTUS";
    string message = "BANANAS";
    int varX = 0, index = 0, newIndex = 0;

    // cout << "Enter a message: ";
    // getline(cin, message);
    cout << "Enter value of X: ";
    cin >> varX;

    // // debug - checks each character index
    // cout << "Total characters: " << message.length() << endl;
    // for (int i = 0; i < message.length(); i++) {
    //     cout << message[i] << " : " << message.find(message[i]) << endl;
    // }

    cout << "Message: " << message << endl;
    for (int i = 0; i < message.length(); i++) {
        index = charSet.find(message[i]);
        newIndex = (index + varX) % charSet.length();
        cout << message[i] << " (" << index <<  ") (" << newIndex << ")" << endl;;
        message[i] = charSet[newIndex];
    }
    cout << "Encrypted message: " << message << endl;


    for (int i = 0; i < message.length(); i++) {
        index = charSet.find(message[i]);
        newIndex = (index - varX + charSet.length()) % charSet.length();
        cout << message[i] << " (" << index <<  ") (" << newIndex << ")" << endl;;
        message[i] = charSet[newIndex];
    }

    cout << -17 % 30 << endl;
    cout << "\nDecrypted message: " << message << endl;

    return 0;
}
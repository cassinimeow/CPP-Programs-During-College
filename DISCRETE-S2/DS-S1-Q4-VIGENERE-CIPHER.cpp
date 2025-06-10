#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string message = "";
    string rawKey = "";
    string alignedKey = "";

    cout << "Enter a message: ";
    getline(cin, message);
    for (int i = 0; i < message.length(); i++) {
        message[i] = toupper(message[i]);
    }
    cout << "Enter a key: ";
    getline(cin, rawKey);
    
    for (int i = 0; i < message.length(); i++) {
        alignedKey += rawKey[i % rawKey.length()];
    }
    for (int i = 0; i < message.length(); i++) {
        alignedKey[i] = toupper(alignedKey[i]);
    }
    
    string charSet = "A0B1C2D3E4F5G6H7I8J9KLMNOPQRSTUVWXYZ .,?";
    int mIndex = 0, kIndex = 0, cipherIndex = 0;
    string encryptedMessage = "", decryptedMessage = "";
    for (int i = 0; i < message.length(); i++) {
        mIndex = charSet.find(message[i]);
        kIndex = charSet.find(alignedKey[i]);
        cipherIndex = (mIndex + kIndex) % charSet.length();
        encryptedMessage += charSet[cipherIndex];
    }

    int originalIndex = 0;
    for (int i = 0; i < message.length(); i++) {
        cipherIndex = charSet.find(encryptedMessage[i]);
        kIndex = charSet.find(alignedKey[i]);
        originalIndex = (cipherIndex - kIndex + charSet.length()) % charSet.length();
        decryptedMessage += charSet[originalIndex];
    }

    cout << "\n\nMessage: " << message << endl;
    cout << "Key: " << rawKey << endl;
    cout << "Aligned Key: " << alignedKey << endl;
    cout << "Encrypted Message: " << encryptedMessage << endl;
    cout << "Decrypted Message: " << decryptedMessage << endl;

    return 0;
}
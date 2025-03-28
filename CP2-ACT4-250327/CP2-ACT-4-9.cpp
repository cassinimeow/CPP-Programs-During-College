#include <iostream>

using namespace std;

int main() {
    // DECLARATION (Store user input)
    int product_id;

    // HEADER (Display title)
    cout << "\n:: PRODUCT PRICE CHECKER ::" << endl;
    cout << "=============================" << endl;
    cout << "| Product ID | Price (PHP)  |" << endl;
    cout << "|------------|-------------|" << endl;
    cout << "| 1          | 50.55       |" << endl;
    cout << "| 2          | 12.35       |" << endl;
    cout << "| 5          | 11.46       |" << endl;
    cout << "| 7          | 11.46       |" << endl;
    cout << "| 9          | 12.35       |" << endl;
    cout << "| 11         | 11.46       |" << endl;
    cout << "=============================" << endl;
    
    // USER INPUT (Get product ID)
    cout << "Enter Product ID: ";
    cin >> product_id;
    
    // CHECK AND DISPLAY (Determine price based on Product ID)
    switch (product_id) {
        case 1:
            cout << "Price: 50.55 PHP" << endl;
            break;
        case 2:
        case 9:
            cout << "Price: 12.35 PHP" << endl;
            break;
        case 5:
        case 7:
        case 11:
            cout << "Price: 11.46 PHP" << endl;
            break;
        default:
            cout << "Invalid Product ID." << endl;
    }
    
    return 0;
}

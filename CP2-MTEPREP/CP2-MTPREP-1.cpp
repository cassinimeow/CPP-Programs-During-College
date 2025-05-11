// Midterm Exam Preparation / Practice
#include <iostream>

// using namespace std;

int main() {
    std::cout << "Hi" <<std::endl;

    #include <iostream>

    int i = 5;
    int x = i++; // x gets the current value of i (5), then i is incremented to 6
    std::cout << "x: " << x << ", i: " << i << std::endl; // Output: x: 5, i: 6
    
    int j = 5;
    int y = ++j; // j is incremented to 6 first, then y gets the new value of j (6)
    std::cout << "y: " << y << ", j: " << j << std::endl; // Output: y: 6, j: 6

    
    return 0;
}
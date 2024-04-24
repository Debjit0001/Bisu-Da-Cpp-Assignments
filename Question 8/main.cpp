// 8. Write a macro that swaps two numbers. WAP to use it.

#include <iostream>
using namespace std;

#define SWAP(a, b) { a = a + b; b = a - b; a = a - b; }

int main() {
    int num1 = 5, num2 = 10;
    cout << "Before swapping: " << num1 << " " << num2 << endl;
    SWAP(num1, num2);
    cout << "After swapping: " << num1 << " " << num2 << endl;

    return 0;
}

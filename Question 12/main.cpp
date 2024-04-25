// 12. Write a program that swaps two numbers using pointers.

#include <iostream>
using namespace std;

class NumberSwapper {
public:
    void swapNumbers(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
};

int main() {
    int num1, num2;
    cout << "enter first number: ";
    cin >> num1;

    cout << "enter second number: ";
    cin >> num2;

    cout << "Before swapping: \nnum1: " << num1 << ", num2: " << num2 << endl;

    NumberSwapper obj;
    obj.swapNumbers(&num1, &num2);

    cout << "After swapping: \nnum1: " << num1 << ", num2: " << num2 << endl;

    return 0;
}

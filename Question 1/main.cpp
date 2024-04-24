#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, product = 1;
    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }

    cout << "Sum of digits: " << sum << endl;
    cout << "Product of digits: " << product << endl;

    return 0;
}

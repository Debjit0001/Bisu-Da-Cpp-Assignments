// 1. WAP to print the sum and product of digits of an integer.

#include <iostream>
using namespace std;

class Calculate
{
public:
    void sum_and_product(int num)
    {
        int sum = 0, product = 1;
        while (num != 0)
        {
            int digit = num % 10;
            sum += digit;
            product *= digit;
            num /= 10;
        }

        cout << "Sum of digits: " << sum << endl;
        cout << "Product of digits: " << product << endl;
    }
};

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    Calculate obj;
    obj.sum_and_product(num);

    return 0;
}
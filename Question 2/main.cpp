// 2. WAP to reverse a number.

#include <iostream>
using namespace std;

class Reverse
{
public:
    void rev(int num)
    {
        int reversedNum = 0;
        while (num != 0)
        {
            int digit = num % 10;
            reversedNum = reversedNum * 10 + digit;
            num /= 10;
        }

        cout << "Reversed number: " << reversedNum << endl;
    }
};

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    Reverse obj;
    obj.rev(num);

    return 0;
}

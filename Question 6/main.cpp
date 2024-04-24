// 6. Write a function to find whether a given number is prime or not. Use the same to generate the prime numbers less than 100.

#include <iostream>
using namespace std;

class Prime
{
public:
    bool isPrime(int num)
    {
        if (num <= 1)
        {
            return false;
        }
        for (int i = 2; i * i <= num; ++i)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Prime obj;

    cout << "Prime numbers less than 100:" << endl;
    for (int i = 2; i < 100; ++i)
    {
        if (obj.isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

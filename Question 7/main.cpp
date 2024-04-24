// 7. WAP to compute the factors of a given number.

class Factor
{
public:
    void factors(int num)
    {
        cout << "Factors of " << num << " are: ";
        for (int i = 1; i <= num; ++i)
        {
            if (num % i == 0)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
};

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Factor obj;
    obj.factors(num);

    return 0;
}

// 4. WAP to compute the sum of the first n terms of the series S = 1 - 2 + 3 - 4 + 5 - ...

#include <iostream>
using namespace std;

class Series
{
public:
    void sum(int n)
    {
        int sum = 0;

        // logic: odd numbers -> +ve, even numbers -ve
        for (int i = 1; i <= n; ++i)
        {
            if (i % 2 == 0)
                sum -= i;
            else
                sum += i;
        }

        cout << "Sum of the series: " << sum << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    Series obj;
    obj.sum(n);

    return 0;
}

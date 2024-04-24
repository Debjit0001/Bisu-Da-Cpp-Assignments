// 3. WAP to compute the sum of the first n terms of the series S = 1 + 1/2 + 1/3 + 1/4 + ....

#include <iostream>
using namespace std;

class Series
{
public:
    void sum(int n)
    {
        float sum = 0.0;
        for (int i = 1; i <= n; ++i)
        {
            sum += 1.0 / i;
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

// 4. WAP to compute the sum of the first n terms of the series S = 1 - 2 + 3 - 4 + 5 - ...

#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    // logic: odd numbers -> +ve, even numbers -ve
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sum -= i;
        } else {
            sum += i;
        }
    }

    cout << "Sum of the series: " << sum << endl;

    return 0;
}

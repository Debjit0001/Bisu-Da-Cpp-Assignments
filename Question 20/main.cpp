// 20. WAP to calculate GCD of two numbers (i) with recursion (ii) without recursion.

#include <iostream>
using namespace std;

class GCDCalculator {
public:
    // Using recursion
    int gcdRecursion(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcdRecursion(b, a % b);
    }

    // Without recursion
    int gcdIteration(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main() {
    GCDCalculator obj;
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD using recursion: " << obj.gcdRecursion(num1, num2) << endl;
    cout << "GCD using iteration: " << obj.gcdIteration(num1, num2) << endl;

    return 0;
}

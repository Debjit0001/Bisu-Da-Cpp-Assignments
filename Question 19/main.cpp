// 19. WAP to calculate the Factorial of a number (i)using recursion, (ii) using iteration

#include <iostream>
using namespace std;

class FactorialCalculator {
public:
    // Using recursion
    int factorialRecursion(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * factorialRecursion(n - 1);
    }

    // Using iteration
    int factorialIteration(int n) {
        int result = 1;
        for (int i = 1; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
};

int main() {
    FactorialCalculator obj;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num < 0){
        cout << "Invalid input! Exiting program...";
        exit(0);
    }

    cout << "Factorial using recursion: " << obj.factorialRecursion(num) << endl;
    cout << "Factorial using iteration: " << obj.factorialIteration(num) << endl;

    return 0;
}

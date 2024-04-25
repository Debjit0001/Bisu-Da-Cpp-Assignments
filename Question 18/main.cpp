// 18. WAP to display Fibonacci series (i)using recursion, (ii) using iteration

#include <iostream>
using namespace std;

class FibonacciGenerator {
public:
    // Using recursion
    int fibonacciRecursion(int n) {
        if (n <= 1) {
            return n;
        }
        return fibonacciRecursion(n - 1) + fibonacciRecursion(n - 2);
    }

    // Using iteration
    int fibonacciIteration(int n) {
        if (n <= 1) {
            return n;
        }
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; ++i) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};

int main() {
    FibonacciGenerator obj;
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    if(n < 0){
        cout << "Invalid input! Exiting program...";
        exit(0);
    }

    cout << "Fibonacci series using recursion: ";
    for (int i = 0; i < n; ++i) {
        cout << obj.fibonacciRecursion(i) << " ";
    }
    cout << endl;

    cout << "Fibonacci series using iteration: ";
    for (int i = 0; i < n; ++i) {
        cout << obj.fibonacciIteration(i) << " ";
    }
    cout << endl;

    return 0;
}

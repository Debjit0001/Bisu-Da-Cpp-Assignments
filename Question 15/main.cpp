// 15. Write a program to find the sum of n elements entered by the user. To write this program, allocate memory dynamically using malloc() / calloc() functions or new operators.

#include <iostream>
using namespace std;

class ElementSumCalculator {
public:
    int* readArray(int n) {
        // Allocating memory dynamically using 'new' operator
        int* arr = new int[n];

        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        return arr;
    }

    int calculateSum(int* arr, int n) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += arr[i];
        }
        return sum;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    ElementSumCalculator obj;
    int* arr = obj.readArray(n);
    int sum = obj.calculateSum(arr, n);

    cout << "Sum of elements: " << sum << endl;

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}

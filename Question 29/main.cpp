// 29. Write a program that will read 10 integers from the user and store them in an array. Implement an array using pointers. The program will print the array elements in ascending and descending order

#include <iostream>
using namespace std;

class ArrayHandler {
public:
    void readIntegers(int* arr, int size) {
        cout << "Enter " << size << " integers:" << endl;
        for (int i = 0; i < size; ++i) {
            cin >> *(arr + i);
        }
    }
    void printAscending(int* arr, int size) {
        cout << "Array elements in ascending order:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << *(arr + i) << " ";
        }
        cout << endl;
    }

    void printDescending(int* arr, int size) {
        cout << "Array elements in descending order:" << endl;
        for (int i = size - 1; i >= 0; --i) {
            cout << *(arr + i) << " ";
        }
        cout << endl;
    }
};

int main() {
    const int size = 10;
    int arr[size];

    ArrayHandler obj;
    obj.readIntegers(arr, size);
    obj.printAscending(arr, size);
    obj.printDescending(arr, size);

    return 0;
}

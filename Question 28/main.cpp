// 28. Write a function that reverses the elements of an array in place. The function must accept only one pointer value and return void.

#include <iostream>
using namespace std;

class ArrayHandler {
public:
    void reverseArray(int arr[], int size) {
        int start = 0;
        int end = size - 1;

        while (start < end) {
            swap(arr[start], arr[end]);
            ++start;
            --end;
        }

        return ; // returning void
    }
};

int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < size; ++i) 
        cin >> *(arr + i);

    ArrayHandler obj;
    obj.reverseArray(arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

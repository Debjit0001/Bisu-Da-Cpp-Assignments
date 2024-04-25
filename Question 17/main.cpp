// 17. Given two ordered arrays of integers, write a program to merge the two arrays to get an ordered array.

#include <iostream>
using namespace std;

class ArrayMerger {
public:
    void mergeArrays(int arr1[], int m, int arr2[], int n, int merged[]) {
        int i = 0, j = 0, k = 0;

        while (i < m && j < n) {
            if (arr1[i] <= arr2[j]) {
                merged[k++] = arr1[i++];
            } else {
                merged[k++] = arr2[j++];
            }
        }

        while (i < m) {
            merged[k++] = arr1[i++];
        }

        while (j < n) {
            merged[k++] = arr2[j++];
        }
    }
};

int main() {
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[4] = {2, 4, 6, 8};
    int merged[9];

    ArrayMerger merger;
    merger.mergeArrays(arr1, 5, arr2, 4, merged);

    cout << "Merged array: ";
    for (int i = 0; i < 9; ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}

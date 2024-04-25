/*
10. WAP to perform the following actions on an array entered by the user:
    i) Print the even-valued elements
    ii) Print the odd-valued elements
    iii) Calculate and print the sum and average of the elements of an array
    iv) Print the maximum and minimum elements of an array
    v) Remove the duplicates from the array
    vi) Print the array in reverse order The program should present a menu to the user and ask for one of the options. The menu should also include options to re-enter the array and to quit the program.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class ArrayOperations
{
private:
    int *arr, size;

    void printArray(int *arr, int size)
    {
        for (int i = 0; i < size; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }

public:
    ArrayOperations()
    {
        cout << "Enter the size of the array: ";
        cin >> size;

        arr = new int[size];
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < size; ++i)
            cin >> arr[i];
    }

    void even_elements()
    {
        for (int i = 0; i < size; ++i)
            if (arr[i] % 2 == 0)
                cout << arr[i] << " ";

        cout << endl;
    }

    void odd_elements()
    {
        for (int i = 0; i < size; ++i)
            if (arr[i] % 2 == 1)
                cout << arr[i] << " ";

        cout << endl;
    }

    void sum_and_average()
    {
        float sum = 0;
        for (int i = 0; i < size; ++i)
            sum += arr[i];

        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / size << endl;
    }

    void min_and_max()
    {
        int max = arr[0], min = arr[0];
        for (int i = 1; i < size; ++i)
        {
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
        cout << "Maximum element: " << max << endl;
        cout << "Minimum element: " << min << endl;
    }

    void unique_elements()
    {
        int uniqueSize = 0, *uniqueArr = new int[size];
        for (int i = 0; i < size; ++i)
        {
            bool duplicate = false;
            for (int j = 0; j < uniqueSize; ++j)
            {
                if (arr[i] == uniqueArr[j])
                {
                    duplicate = true;
                    break;
                }
            }
            if (!duplicate)
                uniqueArr[uniqueSize++] = arr[i];
        }
        cout << "Array after removing duplicates: ";
        printArray(uniqueArr, uniqueSize);
    }

    void rev()
    {
        cout << "Array in reverse order: ";

        for (int i = size - 1; i >= 0; --i)
            cout << arr[i] << " ";
        cout << endl;
    }

    void rebuild()
    {
        cout << "Enter the new elements of the array: ";
        for (int i = 0; i < size; ++i)
            cin >> arr[i];
    }
};

int main()
{
    ArrayOperations obj;

    int choice;
    do
    {
        cout << "1. Print the even-valued elements\n";
        cout << "2. Print the odd-valued elements\n";
        cout << "3. Calculate and print the sum and average of the elements\n";
        cout << "4. Print the maximum and minimum elements\n";
        cout << "5. Remove duplicates from the array\n";
        cout << "6. Print the array in reverse order\n";
        cout << "7. Re-enter the array\n";
        cout << "8. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Even elements: ";
            obj.even_elements();
            break;
        case 2:
            cout << "Odd elements: ";
            obj.odd_elements();
            break;
        case 3:
            obj.sum_and_average();
            break;
        case 4:
            obj.min_and_max();
            break;
        case 5:
            obj.unique_elements();
            break;
        case 6:
            obj.rev();
            break;
        case 7:
            obj.rebuild();
            break;
        case 8:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}

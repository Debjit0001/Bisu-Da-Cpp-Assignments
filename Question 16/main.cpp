/*
16. Write a menu-driven program to perform the following obj on strings:
    a) Show the address of each character in a string
    b) Concatenate two strings without using the strcat function.
    c) Concatenate two strings using strcat function.
    d) Compare two strings
    e) Calculate length of the string (use pointers)
    f) Convert all lowercase characters to uppercase
    g) Convert all uppercase characters to lowercase
    h) Calculate number of vowels
    i) Reverse the string
*/

#include <iostream>
#include <string.h>
using namespace std;

class StringOperations {
public:
    void showAddress(const char* str) {
        cout << "Address of each character in the string:" << endl;
        for (int i = 0; str[i] != '\0'; ++i) {
            cout << "Character: " << str[i] << " Address: " << static_cast<const void*>(&str[i]) << endl;
        }
    }

    char* concatenateStrings(const char* str1) {
        char str2[100];
        cout << "Enter another string: ";
        cin >> str2;

        int len1 = strlen(str1);
        int len2 = strlen(str2);
        char* result = new char[len1 + len2 + 1];
        strcpy(result, str1);
        strcat(result, str2);
        return result;
    }

    int compareStrings(const char* str1) {
        char str2[100];
        cout << "Enter another string: ";
        cin >> str2;

        return strcmp(str1, str2);
    }

    int calculateLength(const char* str) {
        int length = 0;
        for (int i = 0; str[i] != '\0'; ++i) {
            length++;
        }
        return length;
    }

    void convertToLowercase(char* str) {
        for (int i = 0; str[i] != '\0'; ++i) {
            str[i] = tolower(str[i]);
        }
    }

    void convertToUppercase(char* str) {
        for (int i = 0; str[i] != '\0'; ++i) {
            str[i] = toupper(str[i]);
        }
    }

    int countVowels(const char* str) {
        int count = 0;
        for (int i = 0; str[i] != '\0'; ++i) {
            char c = tolower(str[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                count++;
            }
        }
        return count;
    }

    void reverseString(char* str) {
        int length = calculateLength(str);
        for (int i = 0; i < length / 2; ++i) {
            char temp = str[i];
            str[i] = str[length - i - 1];
            str[length - i - 1] = temp;
        }
    }

    void rebuild(char str[]) {
        cout << "Enter the string: ";
        cin.ignore(); // Ignore newline character left by previous cin
        cin.getline(str, 100);
    }
};

int main() {
    StringOperations obj;
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Show address of each character in the string\n";
        cout << "2. Concatenate two strings\n";
        cout << "3. Compare two strings\n";
        cout << "4. Calculate length of the string\n";
        cout << "5. Convert string to lowercase\n";
        cout << "6. Convert string to uppercase\n";
        cout << "7. Count vowels in the string\n";
        cout << "8. Reverse the string\n";
        cout << "9. Re-enter the string\n";
        cout << "10. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                obj.showAddress(str);
                break;
            case 2:
                cout << "Concatenated string: " << obj.concatenateStrings(str) << endl;
                break;
            case 3:
                cout << "Comparison result: " << obj.compareStrings(str) << endl;
                break;
            case 4:
                cout << "Length of the string: " << obj.calculateLength(str) << endl;
                break;
            case 5:
                obj.convertToLowercase(str);
                cout << "Converted to lowercase: " << str << endl;
                break;
            case 6:
                obj.convertToUppercase(str);
                cout << "Converted to uppercase: " << str << endl;
                break;
            case 7:
                cout << "Number of vowels: " << obj.countVowels(str) << endl;
                break;
            case 8:
                obj.reverseString(str);
                cout << "Reversed string: " << str << endl;
                break;
            case 9:
                obj.rebuild(str);
            case 10:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 10);

    return 0;
}

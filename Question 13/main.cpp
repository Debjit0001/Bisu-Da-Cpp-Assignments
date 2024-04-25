// 13. Write a program in which a function is passed the address of two variables and then alter its contents.

#include <iostream>
using namespace std;

class VariableAlterer {
public:
    void alterContents(int* a, int* b) {
        *a *= 2;
        *b += 5;
    }
};

int main() {
    int num1 = 5, num2 = 10;
    cout << "Before altering: " << num1 << " " << num2 << endl;

    VariableAlterer obj;
    obj.alterContents(&num1, &num2);

    cout << "After altering: " << num1 << " " << num2 << endl;

    return 0;
}

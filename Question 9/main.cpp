// 9. WAP to print a triangle of stars as follows (take number of lines from user):

#include <iostream>
using namespace std;

class Pattern
{
public:
    void draw_pattern(int rows)
    {

        for (int i = 1; i <= rows; ++i)
        {

            for (int j = i; j < rows; ++j)
                cout << " ";

            for (int k = 1; k <= 2 * i - 1; ++k)
                cout << "*";

            cout << endl;
        }
    }
};

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    Pattern obj;
    obj.draw_pattern(rows);

    return 0;
}

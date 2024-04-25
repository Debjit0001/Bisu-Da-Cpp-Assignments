// 14. Write a program which takes the radius of a circle as input from the user, passes it to another function that computes the area and the circumference of the circle and displays the value of area and circumference from the main() function.

#include <iostream>
using namespace std;

class CircleCalculator {
public:
    void calculateCircle(double radius, double& area, double& circumference) {
        const double PI = 3.14159;
        area = PI * radius * radius;
        circumference = 2 * PI * radius;
    }
};

int main() {
    double radius, area, circumference;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    CircleCalculator obj;
    obj.calculateCircle(radius, area, circumference);

    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}

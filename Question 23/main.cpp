// 23. Create a class Triangle. Include overloaded functions for calculating area. Overload assignment operator and equality operator.

#include <iostream>
using namespace std;

class Triangle {
private:
    double base;
    double height;

public:
    Triangle() {
        this->base = 0;
        this->height = 0;
    }

    Triangle(double base, double height) {
        this->base = base;
        this->height = height;
    }

    Triangle& operator=(const Triangle& other) {
        if (this != &other) {
            this->base = other.base;
            this->height = other.height;
        }
        return *this;
    }

    bool operator==(const Triangle& other) const {
        return (this->base == other.base && this->height == other.height);
    }

    double area() const {
        return 0.5 * this->base * this->height;
    }
};

int main() {
    double base, height;
    
    cout << "Enter base and height for first triangle: ";
    cin >> base >> height;
    Triangle t1(base, height);

    cout << "Enter base and height for second triangle: ";
    cin >> base >> height;
    Triangle t2(base, height);

    cout << "Area of Triangle 1: " << t1.area() << endl;
    cout << "Area of Triangle 2: " << t2.area() << endl;

    if (t1 == t2) {
        cout << "Triangle 1 is equal to Triangle 2" << endl;
    } else {
        cout << "Triangle 1 is not equal to Triangle 2" << endl;
    }

    t2 = t1;
    cout << "After using overloaded assignment operator, ";
    if (t1 == t2) {
        cout << "Now, Triangle 1 is equal to Triangle 2" << endl;
    } else {
        cout << "Now, Triangle 1 is not equal to Triangle 2" << endl;
    }

    return 0;
}

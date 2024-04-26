/*
24. Create a class Box containing length, breadth and height. Include the following methods in it: 
    a) Calculate surface Area 
    b) Calculate Volume 
    c) Increment, Overload ++ operator (both prefix & postfix) 
    d) Decrement, Overload -- operator (both prefix & postfix) 
    e) Overload operator == (to check equality of two boxes), as a friend function 
    f) Overload Assignment operator 
    g) Check if it is a Cube or cuboid Write a program which takes input from the user for length, breadth and height to test the above class.
*/

#include <iostream>
using namespace std;

class Box {
public:
    double length;
    double breadth;
    double height;

    Box() {
        this->length = 0;
        this->breadth = 0;
        this->height = 0;
    }

    Box(double length, double breadth, double height) {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    // a. Calculate surface area
    double surfaceArea() const {
        return 2 * (length * breadth + length * height + breadth * height);
    }

    // b. Calculate volume
    double volume() const {
        return length * breadth * height;
    }

    // c. Increment, Overload ++ operator (both prefix & postfix) 
    Box& operator++() {
        ++this->length;
        ++this->breadth;
        ++this->height;
        return *this;
    }

    Box operator++(int) {
        Box temp = *this;
        ++(*this);
        return temp;
    }

    // d. Decrement, Overload -- operator (both prefix & postfix) 
    Box& operator--() {
        --length;
        --breadth;
        --height;
        return *this;
    }
    Box operator--(int) {
        Box temp = *this;
        --(*this);
        return temp;
    }

    // e. Overload operator == (to check equality of two boxes), as a friend function 
    friend bool operator==(const Box& b1, const Box& b2) {
        return (b1.length == b2.length && b1.breadth == b2.breadth && b1.height == b2.height);
    }

    // f. Overloaded assignment operator
    Box& operator=(const Box& other) {
        if (this != &other) {
            length = other.length;
            breadth = other.breadth;
            height = other.height;
        }
        return *this;
    }

    // g. Check if it is a cube or cuboid
    string type() const {
        if (length == breadth && breadth == height)
            return "Cube";
        else
            return "Cuboid";
    }
};

int main() {
    double length, breadth, height;
    cout << "Enter length, breadth, and height of the box: ";
    cin >> length >> breadth >> height;

    Box box(length, breadth, height);

    cout << "Surface Area: " << box.surfaceArea() << endl;
    cout << "Volume: " << box.volume() << endl;
    cout << "Type: " << box.type() << endl;

    cout << "After increment: ";
    box++;
    cout << "Length: " << box.length << ", Breadth: " << box.breadth << ", Height: " << box.height << endl;

    cout << "After decrement: ";
    --box;
    cout << "Length: " << box.length << ", Breadth: " << box.breadth << ", Height: " << box.height << endl;

    return 0;
}

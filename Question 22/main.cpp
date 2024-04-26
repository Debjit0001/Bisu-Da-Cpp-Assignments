// 22. Create the Person class. Create some objects of this class (by taking information from the user). Inherit the class Person to create two classes, Teacher and Student class. Maintain the respective information in the classes and create, display and delete objects of these two classes (Use Runtime Polymorphism).

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    // Default constructor deoar karon, sudhu perameterized constructor thakle error debe
    Person() {}

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    virtual void display() const {
        cout << "Name: " << name << ", Age: " << age;
    }

    virtual ~Person() {}
};

class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string name, int age, string subject) {
        this->name = name;
        this->age = age;
        this->subject = subject;
    }
    void display() const override {
        cout << "Teacher - ";
        Person::display();
        cout << ", Subject: " << subject << endl;
    }

    ~Teacher() {}
};

class Student : public Person {
private:
    string grade;

public:
    Student(string name, int age, string grade) {
        this->name = name;
        this->age = age;
        this->grade = grade;
    }
    void display() const override {
        cout << "Student - ";
        Person::display();
        cout << ", Grade: " << grade << endl;
    }

    ~Student() {}
};

int main() {
    Person* people[4];

    cout << "Enter information for 2 teachers:" << endl;
    for (int i = 0; i < 2; ++i) {
        string name, subject;
        int age;
        cout << "Teacher " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin >> ws, name); // double word string input nebar jonne
        cout << "Age: ";
        cin >> age;
        cin.ignore(); // ager line er input buffer clear korar jonne
        cout << "Subject: ";
        getline(cin >> ws, subject);
        people[i] = new Teacher(name, age, subject);
        cout << endl;
    }

    cout << "\nEnter information for 2 students:" << endl;
    for (int i = 2; i < 4; ++i) {
        string name, grade;
        int age;
        cout << "Student " << i - 1 << ":" << endl;
        cout << "Name: ";
        getline(cin >> ws, name);
        cout << "Age: ";
        cin >> age;
        cin.ignore(); 
        cout << "Grade: ";
        getline(cin >> ws, grade); 
        people[i] = new Student(name, age, grade);
        cout << endl;
    }

    cout << "\nInformation of all people:" << endl;
    for (int i = 0; i < 4; ++i) {
        people[i]->display();
    }

    for (int i = 0; i < 4; ++i) {
        delete people[i];
    }

    return 0;
}

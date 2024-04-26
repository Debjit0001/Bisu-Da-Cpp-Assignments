// 45. Create a structure Student containing fields for Roll No., Name, Class, Year and Total Marks. Create 4 students and store them in a file.

#include <iostream>
#include <fstream>
using namespace std;

// Define the class for Student
class Student
{
public:
    int rollNo;
    string name;
    string className;
    int year;
    double totalMarks;

    // Function to input student details
    void inputDetails()
    {
        cout << "Enter Roll No.: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore(); // Ignore the newline character left in the buffer
        getline(cin, name);
        cout << "Enter Class: ";
        cin >> className;
        cout << "Enter Year: ";
        cin >> year;
        cout << "Enter Total Marks: ";
        cin >> totalMarks;
    }

    // Function to display student details
    void displayDetails() const
    {
        cout << "Roll No.: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Year: " << year << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

// Function to write student data to a CSV file
void writeStudentData(const Student students[], int numStudents, const string &filename)
{
    ofstream outFile(filename);
    if (!outFile.is_open())
    {
        cerr << "Unable to open file." << endl;
        return;
    }
    for (int i = 0; i < numStudents; ++i)
    {
        outFile << students[i].rollNo << "," << students[i].name << "," << students[i].className << "," << students[i].year << "," << students[i].totalMarks << endl;
    }
    outFile.close();
    cout << "Student data has been written to " << filename << endl;
}

int main()
{
    // Create an array of students
    const int numStudents = 3;
    Student students[numStudents];

    // Input details for each student
    for (int i = 0; i < numStudents; ++i)
    {
        cout << "Enter details for Student " << i + 1 << ":" << endl;
        students[i].inputDetails();
        cout << endl;
    }

    // Write student data to a CSV file
    writeStudentData(students, numStudents, "students.csv");

    return 0;
}

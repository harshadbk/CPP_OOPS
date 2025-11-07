#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNo;
    float marks;

public:
    void getStudentData() {
        getData();  // Call base class function
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayStudentData() {
        displayData();  // Call base class function
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

// Main function
int main() {
    Student s;

    cout << "Enter student details:\n";
    s.getStudentData();

    cout << "\n--- Student Details ---\n";
    s.displayStudentData();

    return 0;
}

#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    static int count;

public:
    void getData() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name;
        count++;
    }

    void showData() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }

    static void showCount() {
        cout << "Total number of students: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.getData();
    s2.getData();
    s3.getData();

    cout << "\n--- Student Details ---\n";
    s1.showData();
    s2.showData();
    s3.showData();

    cout << "\n--- Using Static Function ---\n";
    Student::showCount();

    return 0;
}

#include<iostream>
using namespace std;

class manager{
    private:
    int age;
    char name[50];
    float salary;

    public:
    void getdetails(){
        cout << "Enter managers details ....\n";
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayinfo(){
        cout << "Name: " << name
             << "\tAge: " << age
             << "\tSalary: " << salary << endl;
    }
};

int main(){

    manager m[5];

    for (int i = 0; i < 3; i++) {
        cout << "\nManager " << i + 1 << ":\n";
        m[i].getdetails();
    }

    cout << "\n--- Manager List ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "Manager " << i + 1 << " -> ";
        m[i].displayinfo();
    }

    return 0;
}

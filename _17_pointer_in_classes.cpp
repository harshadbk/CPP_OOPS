#include<iostream>
using namespace std;

class person{
private:
string name;
int age;
public:
 void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    // Function to display data
    void showData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    person *eldest(person *p){
        if(this->age > p->age)
        {
          return this;
        }
        else{
            return p;
        }
    }

};

int main(){

    person p;
    cout << "Enters details for person 1\n"<<endl;
    p.getData();
    p.showData();

    person p2;
    cout << "Enters details for person 2\n"<<endl;
    p2.getData();
    p2.showData();

    person p3;
    cout << "Enters details for person 3\n"<<endl;
    p3.getData();
    p3.showData();

    person *eldestperson = p.eldest(&p2);
    eldestperson = eldestperson->eldest(&p3);

    cout << "\n--- Eldest Person ---\n";

    eldestperson->showData();

    return 0;
}
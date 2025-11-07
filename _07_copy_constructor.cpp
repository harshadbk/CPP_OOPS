#include<iostream>
using namespace std;

class student {
    private:
    string name;
    int roll_no;

    public:

    student(string name,int roll_no){
        this->roll_no = roll_no;
        this->name = name;
    }

    student(const student &obj){
        name = obj.name;
        roll_no = obj.roll_no;
    }

    void display(){
        cout << name <<"  "<<roll_no<<endl;
    }
};

int main(){

    student s("Harshad",12);
    student s2(s);
    cout << "Default constructor called ...\n";
    s.display();
    cout << "Copy constructor called ...\n";
    s2.display();

    return 0;
}
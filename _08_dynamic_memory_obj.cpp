#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int roll_no;
    public:
    
    student(string name,int roll_no){
        this->name = name;
        this->roll_no = roll_no;
        cout << "Constructor called for "<<name;
    }

    void display(){
        cout << "Students Details ...";
        cout << this->name << " " << endl;
        cout << this->roll_no << "  "<<endl;
    }

    ~student(){
        cout << "Destuctor called for "<<this->name<<endl;
    }

};

int main(){
    student *s = new student("harshad",98);
    s->display();
    s->~student();
    delete s;
    return 0;
}
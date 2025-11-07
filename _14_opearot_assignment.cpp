#include<iostream>
using namespace std;

class sample{
    private:
    int data;
    public:
    sample(int data=0){
        cout << "Default constructor called \n";
        this->data = data;
    }

    sample(const sample &s){
      cout << "Copy constructor called ...\n";
      data = s.data;
    }

    sample& operator=(const sample &s){
        cout << "Assignment Operator called" << endl;
        if (this != &s) {
            data = s.data;
        }
        return *this;
    }

    void display() {
        cout << "x = " << data << endl;
    }

};

int main(){
    sample s(12);
    sample s2 = s;
    sample s3;
    s3 = s;

    cout <<"value\n";
    s.display();
    s2.display();
    s3.display();
    return 0;
}
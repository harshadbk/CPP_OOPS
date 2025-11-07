#include<iostream>
using namespace std;

class complex{
    private:
    int real;
    int imagine;

    public:

    void setdata(int real,int imagine){
     this->real=real;
     this->imagine = imagine;
    };

    void display(){
        cout << real<<" + " << imagine << " i ";
    };

    friend complex addComplex(complex,complex);
};

complex addComplex(complex c1,complex c2){
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imagine = c1.imagine + c2.imagine;

    return temp;
}

int main(){
   complex c,c2,c3;
   c.setdata(12,34);
   c2.setdata(24,2);

   c3=addComplex(c,c2);
   c3.display();

    return 0;
}
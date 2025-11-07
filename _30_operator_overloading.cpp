#include<iostream>
using namespace std;
class demo{
    private:
    int real;
    int imag;
    public:
    demo(int real=0,int imag=0){
        this->real = real;
        this->imag = imag;
    }

    void display(){
        cout << real<<" + "<<imag<< " i ";
    }

    demo operator+(demo d1){
        demo temp;
        temp.real =  this->real + d1.real;
        temp.imag = this->imag + d1.imag;
        return temp;
    }

};
int main(){
    demo d1(12,23);
    demo d2(23,12);
    demo d3(d1 + d2);
    d3.display();
    return 0;
}
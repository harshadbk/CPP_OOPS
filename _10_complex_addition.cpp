#include<iostream>
using namespace std;

class complex{
    private:
    float real;
    float img;
    public:
    complex(){
        this->img=0;
        this->real=0;
    }
    complex(float real,float img){
        this->img=img;
        this->real=real;
    }
    
    complex  operator+(complex c){
        complex temp;
        temp.img = c.img + this->img;
        temp.real = c.real + this->real;
        return temp;
    }

    complex operator*(complex c){
         complex temp;
        temp.img = c.img * img;
        temp.real = c.real * real;
        return temp;
    }

    void display(){
        cout << real << " + " << img << "i" << endl;
    }

};

int main(){

    complex c1(12.2,2.0);
    complex c2(2.0,12.2);

    complex c3(c1+c2);
    c3.display();

    complex c4 = c1*c2;
    c4.display();
    
    return 0;
}
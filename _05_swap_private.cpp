#include<iostream>
using namespace std;

class class1;

class class2{
    private:
    int num;
    public:
    void setnum(int num){
        this->num = num;
    }

    void printnum(){
        cout << num <<endl;
    }

    friend void swapdata(class1 &,class2 &);
};

class class1{
    private:
    int num;
    public:
    void setnum(int num){
        this->num = num;
    }

     void printnum(){
        cout << num <<endl;
    }

    friend void swapdata(class1 &,class2 &);
};

void swapdata(class1 &obj , class2 &obj2){
   int temp;
   temp = obj.num;
   obj.num = obj2.num;
   obj2.num = temp;
}

int main(){

    class1 obj1;
    obj1.setnum(78);
    class2 obj2;
    obj2.setnum(89);
    cout << "Before swapping \n";
    obj1.printnum();
    obj2.printnum();

    swapdata(obj1,obj2);

    cout << "After swapping \n";
   obj1.printnum();
    obj2.printnum();

    return 0;
}
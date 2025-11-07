#include<iostream>
using namespace std;

class student{
public:
static int count;

student(){
    count++;
}

static void display(){
    cout << "Total objects created:"<<count<<endl;
}
};

int student :: count = 0;

int main(){

    student s1,s2;
    student::display();
    student s3;
    student::display();
    return 0;
}
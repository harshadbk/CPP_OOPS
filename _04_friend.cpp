#include <iostream>
using namespace std;

class B;

class A
{
private:
    int num;

public:
    void setdata(int num2)
    {
        num = num2;
    }

    friend void findmax(A, B);
};

class B
{
private:
    int num;

public:
    void setdata(int num2)
    {
        num = num2;
    }

    friend void findmax(A, B);
};

void findmax(A obj, B obj2)
{
    if (obj.num > obj2.num)
    {
        cout << "Maximum number is " << obj.num;
    }
    else
    {
        cout << "Maximum number is " << obj2.num;
    }
}

int main()
{
    A obj;
    obj.setdata(12);

    B obj2;
    obj2.setdata(56);

    findmax(obj, obj2);

    return 0;
}
#include <iostream>
using namespace std;

class mathematics {
public:
    void add(int a, int b) {
        cout << "Sum of 2 numbers: " << a + b << endl;
    }
    void add(int a, int b, int c) {
        cout << "Sum of 3 numbers: " << a + b + c << endl;
    }
};

class shape {
public:
    virtual void area() {
        cout << "This is a generic shape." << endl;
    }
};

class square : public shape {
public:
    void area() override {
        int a;
        cout << "Enter length of square: ";
        cin >> a;
        cout << "Area of Square = " << a * a << endl;
    }
};

class circle : public shape {
public:
    void area() override {
        float r;
        cout << "Enter radius of circle: ";
        cin >> r;
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

int main() {
    cout << "=== Compile-time Polymorphism ===" << endl;
    mathematics m;
    m.add(12, 23);
    m.add(12, 12, 12);

    cout << "\n=== Runtime Polymorphism ===" << endl;
    shape *s; 
    square sq;
    circle c;

    s = &sq;
    s->area(); 

    s = &c;
    s->area();

    return 0;
}
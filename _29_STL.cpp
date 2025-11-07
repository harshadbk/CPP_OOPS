#include<iostream>
using namespace std;

template<typename T>

void swapnumbers(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp; 
}

int main(){
    int x = 67;
    int y = 76;
    cout << "Before swaping ...\n";
    cout << x <<" "<< y<<endl;
    cout << "After swapping ...\n";
    swapnumbers(x,y);
    cout << x <<" "<< y;
    return 0;
}
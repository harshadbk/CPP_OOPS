#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> numbers;

    numbers.push_back(78);
    numbers.push_front(76);
    numbers.push_back(98);
    numbers.push_front(89);
    numbers.push_back(90);
    numbers.push_front(9);
    numbers.push_back(24);
    numbers.push_front(42);
    numbers.push_back(22);
    numbers.push_front(11);

    for(int x:numbers){
        cout << x << endl;
    }
    numbers.remove(9);
    numbers.sort();
    numbers.clear();

    cout << numbers.size();
    return 0;
}
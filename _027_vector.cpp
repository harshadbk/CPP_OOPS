#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> numbers;
    numbers.push_back(12);
    numbers.push_back(13);
    numbers.push_back(14);
    numbers.push_back(15);
    numbers.push_back(16);
    numbers.push_back(17);
    numbers.push_back(18);
    numbers.push_back(19);
    numbers.push_back(20);

    for(int i=0; i<numbers.size();i++){
        cout << numbers[i]<<endl;
    }

    cout << "First element: " << numbers.front() << endl;
    cout << "Last element: " << numbers.back() << endl;
    cout << "Element at index 2: " << numbers.at(2) << endl;

    numbers.pop_back();
    numbers.pop_back();

    for(int i=0;i<numbers.size();i++){
        cout << numbers[i]<<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter 2 numbers:";
    cin >> a >> b;

    try{
        if(b==0){
            throw b;
        }
        if(a<0 && b<0){
            throw string("Negative numbers can't allowed ...\n");
        }
        int result = (a/b);
        cout << "Result = "<<result;
    }
    catch(int a){
        cout << "Error Division by zero not allowed "<< endl;
    }
    catch(string s){
        cout << "Error: " << s << endl;
    }
    catch(...){
        cout << "Unknown exception occurred!" << endl;
    }
    return 0;
}
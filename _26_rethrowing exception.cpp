#include<iostream>
using namespace std;

void divide(int n1,int n2){
    try{
      if(n2==0){
        throw n2;
      }
      if(n1<0 && n2<0){
       throw "Negative numbers are not allowed ...\n";
      }
      int result = (n1/n2);
      cout << result;
    }
    catch(int n2){
     cout << "Divide by zero not allowed ..."<<endl;
     throw;
    }
    catch(const char *a){
        cout << "Negative numbers are not allowed...\n";
        throw;
    }
}

int main(){
    int n1,n2;
    cout << "Enter 2 numbers:";
    cin >>n1>>n2;
    try{
      divide(n1,n2);
    }
    catch(int n2){
     cout << "Divide by zero not allowed ..."<<endl;
    }
    catch(const char *a){
     cout << "Negative numbers are not allowed...\n";

    }
    cout << "Ending of code";
    return 0;
}
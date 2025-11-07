#include<iostream>
using namespace std;

class alpha{
  public:
  alpha(int value){
    cout << "Value of class alpha is "<<value<<endl;
  }
};

class beta{
 public:
 beta(int value){
    cout << "Value of class beta is "<<value<<endl;
 }
};

class gamma:public alpha,public beta{
   public:
   gamma(int a,int b,int c):alpha(a),beta(b){
    cout << "value of class gamma is "<<c<<endl;
   }
};

int main(){
    cout << "Craeting objects of gamma ....\n";
   gamma obj(12,24,36);
    return 0;
}
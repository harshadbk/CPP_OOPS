#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    ifstream inFile("Data.txt");
    if(!inFile){
        cout << "Source file created successfully...\n";
    }
    else{
        cout << "Source file not created...\n";
    }

    ofstream outFile("destination.txt");
    if(!outFile){
        cout << "destination file created successfully...\n";
    }
    else{
        cout << "destination file not created...\n";
    }
   
    char ch;

    while (inFile.get(ch))
    {
        outFile.put(ch);
    }
    cout << "File copied to destination successfully ...";
    return 0;
}
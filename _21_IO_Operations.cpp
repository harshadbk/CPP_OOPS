#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    string s ;
    cout << "Enter the string";
    getline(cin,s);

    int len = s.length();

    cout << "Length of string is "<<len<<endl;

    ofstream outfile("Data.txt");
    if(!outfile){
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    outfile << s;
    outfile.close();
    cout << "String stored in file successfully!" << endl;

    ifstream infile("Data.txt");
    if(!infile){
        cout << "Error opening file for writing!" << endl;
    }
    string s2;
    getline(infile,s2);
    infile.close();

    cout << "Fetched data from file "<<s2;

    return 0;
}
#include <iostream>
#include<fstream>
using namespace std;

class student
{
private:
    int roll_no;
    string name;
    float percentage;

public:
    void getData()
    {
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void showData()
    {
        cout << "\nRoll No: " << roll_no;
        cout << "\nName: " << name;
        cout << "\nMarks: " << percentage << endl;
    }
};
int main()
{
    student s1,s2;
    s1.getData();

    ofstream Outfile("student.dat",ios::binary);

    if(!Outfile){
        cout << "Error while creating file ...\n";
        return 1;
    }
    else{
     cout << "created output file file successfully...\n";   
    }

    Outfile.write(reinterpret_cast<char*>(&s1),sizeof(s1));
    Outfile.close();

    cout << "Data written to file successfully!\n" << endl;

    ifstream Infile("student.dat",ios::binary);
    
     if(!Infile){
        cout << "Error while opening file ...\n";
        return 1;
    }
    else{
     cout << "opening file successfully...\n";   
    }

    Infile.read(reinterpret_cast<char*>(&s2),sizeof(s2));

    cout << "Data read from file..\n";
    s2.showData();

    return 0;
}
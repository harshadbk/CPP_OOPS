#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void setrollno(int roll_no)
    {
        this->roll_no = roll_no;
    }

    void displayrollno()
    {
        cout << "Roll No for student :" << this->roll_no << endl;
    }
};

class test : public student
{
protected:
    float sub1, sub2;

public:
    void setmarks(float sub1, float sub2)
    {
        this->sub1 = sub1;
        this->sub2 = sub2;
    }
    void showMarks()
    {
        cout << "Marks in Subject 1: " << sub1 << endl;
        cout << "Marks in Subject 2: " << sub2 << endl;
    }
};

class Sports
{
protected:
    float score;

public:
    void setScore(float s)
    {
        score = s;
    }
    void showScore()
    {
        cout << "Sports Score: " << score << endl;
    }
};

class result : public test, public Sports
{
protected:
    float total;

public:
    void display()
    {
        total = sub1 + sub2 + score;
        displayrollno();
        showMarks();
        showScore();
        cout << "Total Score: " << total << endl;
    }
    
};

int main()
{
    result student1;

    student1.setrollno(101);
    student1.setmarks(85.5, 90.0);
    student1.setScore(8.5);

    cout << "----- Student Result -----" << endl;
    student1.display();

    return 0;
}
#include<iostream>
using namespace std;
class Grade
{
    int grade;
    public:
    void read()
    {
        cout<<"Enter grade of student: ";
        cin>>grade;
    }
    void display()
    {
        cout<<"Grade: "<<grade<<endl;
    }
};
class Student:public Grade
{
     char name[30];
     public:
     void read()
     {
        cout<<"Enter name of student: ";
        cin>>name;
     }
     void display()
     {
        cout<<"Name: "<<name<<endl;
     }
};
int main()
{
    Grade g;
    Student s;
    s.read();
    s.display();
s.Grade::read();
s.Grade::display();
return 0;
}
#include<iostream>
using namespace std;
class student
{
    public:
    char name[30]; int roll; int age;
    void read()
    {
        cout<<"Enter name, roll no. and age: ";
        cin >>name>>roll>>age;    }
void display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll no.: "<<roll<<endl;
    cout<<"Age: "<<age<<endl<<endl;
}
};
class subject
{
    public:
    int oop; int mp; int math;
    void readm()
    {
        cout<<"Enter marks in OOP,DS,Maths: ";
        cin>>oop>>mp>>math;
    }
    void displayn()
    {
        cout<<"OOP: "<<oop<<endl<<"Microprocessor: "<<mp<<endl<<"Maths: "<<math<<endl;
    }
};
class exam:public student,public subject
{
    private:
    int total; float per;
    public:
    void readt()
    {
        read();
        readm();
    }
    void result()
    {
        total=oop+mp+math;
        per=(float)total/5;
    }
    void show()
    {display();
        displayn();
        cout<<"Total: "<<total<<endl<<"Percentage: "<<per<<endl;
        if(oop>=50&&mp>=50&&math>=50)
        {
            cout<<"Pass"<<endl;
        }
        else
        cout<<"Fail"<<endl;
    }
};
int main()
{
    exam e;
    e.readt();
    e.result();
    e.show();
    return 0;
}

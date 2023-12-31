#include<iostream>
using namespace std;
class person
{
    public:
    int age; char name[30]; char address[30];
void read()
{
    cout<<"Enter name: ";
     cin>>name;
     fflush(stdin);
    cout<<" Enter address: ";
     cin>>address;
     fflush(stdin);
    cout<<"Enter age: ";
    cin>>age;
}
void display()
{
    cout<<"Name: "<<name<<endl<<"Address: "<<address<<endl<<"Age: "<<age<<endl;
}
};
class employee:public person
{
    public:int salary; int eid;
    void reade()
    {
        cout<<"Enter employee ID and Salary: ";
        cin>>eid>>salary;
    }
    void disemp()
    {
        cout<<"ID: "<<eid<<endl<<"Salary: "<<salary<<endl;
    }
};
class manager:public employee
{
    private:
    int exp_year; char degree[30];
    public:
    void readm()
    {
        cout<<"Enter approximate experience years: ";
       cin>>exp_year;
       cout<<"Enter the highest degree achieved: ";
       cin>>degree; 
    }
void dism()
{
    cout<<"Experience years: "<<exp_year<<endl<<"Degree: "<<degree<<endl;
}
};
int main()
{
    manager m;
    m.read();
    m.reade();
    m.readm();
    m.display();
    m.disemp();
    m.dism();
    return 0;
}
#include<iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;
public:
    Person(string n,int a)
    {
        name=n;
        age=a;
    }

};
class Employee:public Person
{
protected:
    string id;
    string phone;
public:
    Employee(string n,int a,string i,string p):Person(n,a)
    {
        id=i;
        phone=p;
    }
};
class Lecturer:public Employee
{
protected:
    string emailID;
    int roomnumber;
public:
    Lecturer(string n,int a,string i,string p,string e,int r):Employee(n,a,i,p)
    {
        emailID=e;
        roomnumber=r;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Phone: "<<phone<<endl;
        cout<<"Email ID: "<<emailID<<endl;
        cout<<"Room Number: "<<roomnumber<<endl;

    }
};
int main()
{
    Lecturer l("Asif Mahmud",45,"2017-3-60-071","01673714436","asif.mahmud@gmail.com",412);
    l.display();
}


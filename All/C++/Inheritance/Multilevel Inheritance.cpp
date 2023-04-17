#include<iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;
public:
    void setname(string n)
    {
        name=n;
    }
    void setage(int a)
    {
        age=a;
    }

};
class Employee:public Person
{
protected:
    string id;
    string phone;
public:
    void setid(string i)
    {
        id=i;
    }
    void setphone(string p)
    {
        phone=p;
    }


};
class Lecturer:public Employee
{
protected:
    string emailID;
    int roomnumber;
public:
    setemailID(string e)
    {
        emailID=e;
    }
    setroom(int r)
    {
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
    Lecturer l;
    l.setname("Asif Mahmud");
    l.setage(45);
    l.setid("2017-3-60-071");
    l.setphone("01673714436");
    l.setemailID("asif.mahmud@gmail.com");
    l.setroom(412);
    l.display();
}

#include<iostream>
using namespace std;
class Employee
{
private:
    int salary,age;
public:
    string name,id;
    Employee();
    Employee(string name,string id,int salary,int age);
    ~Employee();
    void display();
};
Employee::Employee()
{

}
Employee::Employee(string a,string b,int c,int d)
{
    name=a;
    id=b;
    salary=c;
    age=d;
}
Employee::~Employee()
{
    cout<<"ffff";
}
void Employee::display()
{
    cout<<"Name: "<<name<<endl<<"ID: "<<id<<endl<<"Salary: "<<salary<<endl<<"Age: "<<age<<endl;
}
int main()
{
    Employee e1;
    Employee e2("Shakib","2017-3-60-071",1200,21);
    Employee e3;
    e2.display();
    return 0;
}

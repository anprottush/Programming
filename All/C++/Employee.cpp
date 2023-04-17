#include<iostream>
using namespace std;
class Employee
{
private:
    string name,id;
    int age,p_number;
public:
    void setName(string name) ;
    string getName();
   void setdata();
   void getdata();
};

void Employee::setName(string name)
{
    this->name = name ;
}

string Employee::getName()
{
    return this->name ;
}

void Employee::setdata()

{
    cout<<"enter name: "<<endl;
        cin>>name;
        cout<<"enter id: "<<endl;
        cin>>id;
        cout<<"enter age: "<<endl;
        cin>>age;
        cout<<"enter phone number: "<<endl;
        cin>>p_number;
}
void Employee:: getdata()
    {
        cout<<"name: "<<name<<endl<<"ID: "<<id<<endl<<"age: "<<age<<endl<<"Phone Number: "<<p_number<<endl;
    }

int main()
{
    Employee e;
    string name ;
    cin >> name ;
   e.setName(name) ;
   cout << e.getName() <<endl;
   //e.setdata();
//e.getdata();
    return 0;
}

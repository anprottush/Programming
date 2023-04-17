#include<iostream>
using namespace std;
class employee
{
private:
    string first,last;
    int salary;
public:
    employee setfirst(string a)
    {
        first=a;
        cout<<"Employee's yearly salaries: "<<endl;
        cout<<"Lisa Roberts: "<<endl;
        cout<<"Mark Stein: "<<endl;
    }
    employee setlast(string b)
    {
       last=b;
       cout<<"Enter the last name: ";
       cin>>last;
       cout<<"Enter the last name: ";
       cin>>last;
    }
    employee setsalary(int c)
    {
        salary=c;
        cout<<"Enter the salary: ";
        cin>>salary;
        cout<<"Enter the salary: ";
        cin>>salary;
    }
    string getfirst()
    {
        return first;
    }
    string getlast()
    {
        return last;
    }
    int getsalary()
    {
        return salary;
    }

     void display()
     {
          cout<<first<<' '<<last<<": $"<<salary*12<<endl;
     }

};
int main()
{
    employee e1,e2;
    string f,l;
    int s;
    e1.setfirst(f);
    e1.setlast(l);
    e1.setsalary(s);
    string fi,la;
    int sa;
    e2.setfirst(fi);
    e2.setlast(la);
    e2.setsalary(sa);
    e1.display();
    e2.display();
}


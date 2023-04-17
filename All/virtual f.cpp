#include<iostream>
using namespace std;
class A
{
public:
    virtual int weapon()
    {

    }
};
class B:public A
{
    public:
        int weapon()
        {
            cout<<"gun"<<endl;
        }
};
class C:public A
{
    public:
    int weapon()
    {
        cout<<"knife"<<endl;
    }
};
int main()
{
    A *a;
    B b;
    C c;
    int n;
    cin>>n;
    if(n==1)
    {
        a=&b;
        a->weapon();
    }
    else if(n==2)
    {
        a=&c;
        a->weapon();
    }
}

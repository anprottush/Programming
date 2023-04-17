#include<iostream>
using namespace std;
int divide(int x,int y)
{
    if(x>0 && y>0 ||x<0 &&y<0)
    {
        cout<<x/y<<endl;
    }
    else if(x==0 ||y==0)
    {
        throw("division by zero");
    }
    else if(x<0 && y>0)
    {
        throw("division is less than 1");
    }
    else if(x>0 && y<0)
    {
       throw("division is less than 1");
    }


}
int main()
{
    int a,b;
    cout<<"enter 2 number: ";
    cin>>a>>b;
    try
    {
        divide(a,b);
    }
    catch(const char *c)
    {
        cout<<c;
    }
}

#include<iostream>
using namespace std;
main()
{
    int x,y,p;
    cout<<"enter 2 number: ";
    cin>>x>>y;
    p=x-y;
    try
    {
        if(p!=0)
        {
            cout<<"result= "<<x/p<<endl;
        }
        else
        {
            throw(p);
        }
    }
    catch(int a)
    {
        cout<<"p= "<<p<<endl;
    }
    cout<<"END";
}

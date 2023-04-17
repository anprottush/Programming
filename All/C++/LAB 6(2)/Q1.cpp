#include<iostream>
using namespace std;
template<class T1>
T1 sum(T1 x,T1 y)
{
    T1 result;
    result=x+y;
    return result;
}
template<class T2>
T2 deff(T2 x,T2 y)
{
    T2 result;
    result=x-y;
    return result;
}
template<class T3>
T3 mul(T3 x,T3 y)
{
    T3 result;
    result=x*y;
    return result;
}
template<class T4>
T4 div(T4 x,T4 y)
{
    T4 result;
    result=x/y;
    return result;
}
int main()
{
    int a,b;
    char c;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<"enter oerator(+,-,*,/): ";
    cin>>c;
    if(c=='+')
    {
        cout<<"Result: "<<sum(a,b)<<endl;
    }
    else if(c=='-')
    {
        cout<<"Result: "<<deff(a,b)<<endl;
    }
     else if(c=='*')
    {
        cout<<"Result: "<<mul(a,b)<<endl;
    }
     else if(c=='/')
    {
        cout<<"Result: "<<div(a,b)<<endl;
    }
    return 0;
}




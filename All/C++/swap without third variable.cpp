//#include<iostream>
#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a,b;
    cout<<"Enter 1st & 2nd value: ";
    cin>>a>>b;
    cout<<"\nBefore Swaping Value: \n\na="<<a<<"\n"<<"b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nAfter Swaping Value: \n\na="<<a<<"\n"<<"b="<<b<<endl;
    return 0;
}


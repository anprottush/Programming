#include<iostream>
using namespace std;
int prime(int a)
{
    int c=0,i;
    bool value;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        value=true;
    }
    else
    {
        value=false;
    }
    return value;
}
int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    prime(n);
    if(prime(n)==true)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
    return 0;
}

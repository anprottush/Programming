#include<iostream>
using namespace std;
int main()
{
        int n;
    cin>>n;
    if(n==3||n==5||n==7)
    {
        cout<<n<<" prime";
    }
    else if(n%2==0||n%3==0||n%5==0||n%7==0||n==1)
    {
        cout<<n <<" not prime";
    }
    else
    {
        cout<<n <<" prime";
    }
    return 0;
}
    int n,i,c=0;
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==1)
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
}

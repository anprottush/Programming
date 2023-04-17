#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    for(int i=1;i<=c;++i)
    {
        sum+=(i*a);
    }
    sum=sum-b;
    if(sum<0)
    {
        cout<<0<<endl;
    }
    else
        cout<<sum<<endl;


}


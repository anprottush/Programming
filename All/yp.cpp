#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,suma=0, sumb=0,sumc=0,n;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        suma+=a;
        sumb+=b;
        sumc+=c;


    }
    if(suma==0 && sumb==0 && sumc==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

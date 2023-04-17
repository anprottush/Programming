#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105];
    int i,l,c=1;
    cin>>s;
    l=strlen(s);
    sort(s,s+l);
    for(i=0;i<l-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            c++;
        }
    }
    if(c%2==1)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }

}

#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    int i,j;
    getline(cin,s1);
    getline(cin,s2);
    for(i=0;s1[i]!='\0';i++)
    {
        s1[i]=tolower(s1[i]);
    }
    for(j=0;s2[j]!='\0';j++)
    {
        s2[j]=tolower(s2[j]);
    }
    if(s1<s2)
    {
        cout<<-1;
    }
    else if(s1>s2)
    {
        cout<<1;
    }
    else
    {
         cout<<0;
    }
    return 0;
}

#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    int i;
    while(gets(s))
    {
        for(i=0;i<strlen(s);i++)
        {
            s[i]=tolower(s[i]);
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
            {
                continue;
            }
            else
            {
                cout<<"."<<s[i];
            }
        }
    }
    return 0;
}

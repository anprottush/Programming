#include<bits/stdc++.h>
int main()
{
    char s[100];
    int n,c=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&s);
        if(s[0]=='+' || s[1]=='+')
            c++;
        else
            c--;
    }
    printf("%d",c);
    return 0;
}

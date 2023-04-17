#include<stdio.h>
int main()
{
    char s[15],s1[15];
    int n,i;
    scanf("%s%s",s,s1);
    n=1;
    i=0;
    while (s[i]!='\0'||s1[i]!='\0')
    {
        if (s[i]!=s1[i])
        {
            n=0;
        }
        i++;
    }
    if (n==1)
        printf("same\n");
    else
        printf("not same\n");
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char s[15],s1[15];
    int ln;
    scanf("%s",s);
    scanf("%s",s1);
    strcat(s," ");
    strcat(s,s1);
    printf("%s",s);
}

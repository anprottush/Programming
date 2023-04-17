#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="hellow";
    char str1[100]="hworld";
    printf("%d",strncmp(str,str1,3));
}

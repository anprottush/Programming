#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int flag=0;
    printf("Enter string: ");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    flag=strcmp(str1,str2);
    if(flag==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
     return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,a,flage=0;
    for(i=0;i<100;i++)
    {
        gets(str);
        if(str[i]=='#')
        {
            flage=1;
            break;
        }
        a=strlen(str);
    }
    printf("enter check");
}

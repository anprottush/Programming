#include<stdio.h>
#include<string.h>
int main()
{
    char s[130];
    int flag=0;
    top:
    scanf("%c",&s);

        if(s=='H'||s=='Q')
        {
            flag=1;
        }
        else
        {
            goto top;

        }

    if(flag==1)
    {
        printf("YES");
    }
    else
    printf("NO");

}

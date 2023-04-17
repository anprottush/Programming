#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int i,flage=1;
    printf("enter a string: ");
    gets(str);
    printf("\nenter a character to find position: ");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
       {
          if(str[i]==ch)
            {
                flage=0;
                break;
            }
       }
       if(flage==1)
       {
           printf("%d",i);
       }
}

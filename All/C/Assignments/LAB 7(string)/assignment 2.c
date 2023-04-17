#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,len,count=1;
    printf("enter string: ");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            continue;
        }
    for(j=i+1;j<len;j++)
    {
        if(str[i]==str[j])
        {
            count++;
            str[j]=' ';
        }
    }
    printf("%c =%d\n",str[i],count);
    count=1;
    }
    return 0;
}

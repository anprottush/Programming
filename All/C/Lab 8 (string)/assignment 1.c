#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],word[100];
    int i,j,flage;
    printf("Enter string: ");
    gets(str);
    printf("Enter  word to search: ");
    gets(word);
    for(i=0;i<(strlen(str)-strlen(word));i++)
    {
        flage=1;
        for(j=0;j<strlen(word);j++)
        {
            if(str[i+j]!=word[j])
            {
                flage=0;
                break;
            }
        }
        if(flage==1)
        {
            printf("Found at index: %d\n",i);
        }
    }
    return 0;
}

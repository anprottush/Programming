#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],word[100];
    int i,j,len1,len_w,count=0,temp;
    printf("Enter string: ");
    gets(str);
    printf("Enter  word to search: ");
    gets(word);
    len1=strlen(str);
    len_w=strlen(word);
    for(i=0;i<len1;i++)
    {
        if(str[i]==word[0])
        {
            temp=i;
            count=0;
        for(j=0;j<len_w;j++)
        {
            if(word[j]==str[temp])
            {
                temp++;
                count++;
            }
        }
        if(count==len_w)
        {
            printf("Found at index: %d\n",i);
        }
    }
}
    return 0;
}



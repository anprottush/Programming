#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int freq[100],i, len;
    printf("Enter any string: ");
    gets(str);
    len = strlen(str);
    for(i=0; i<26; i++)
    {
        freq[i] = 0;
    }
    for(i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i] - 97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            freq[str[i] - 65]++;
        }
    }
    printf("\nFrequency of all characters in the given string: \n");
    for(i=0; i<26; i++)
    {
        if(freq[i] != 0)
        {
            printf("'%c' = %d\n", (i + 97), freq[i]);
        }
    }
     return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,words;
    printf("Enter any string: ");
    gets(str);
    i = 0;
    words = 1;
    while(str[i] != '\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }
         i++;
    }
      printf("No.of words : %d", words);
      return 0;
}

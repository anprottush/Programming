#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],v;

    printf("Enter any string: ");
    scanf("%s",str);
    printf("\nmain string: %s\n",str);
    strrev(str);
    printf("\nreverse string: %s",str);
    return 0;
}

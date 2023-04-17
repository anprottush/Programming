#include<stdio.h>
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    if(n>=40)
    {
        printf("\npass");
    }
    else if(n<=40)
    {
        printf("\nfail");
    }
    else
    {
        printf("\nno pass & fail");
    }
    return 0;
}

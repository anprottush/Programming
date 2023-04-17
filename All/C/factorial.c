#include<stdio.h>
int main()
{
    int i,n,fact;
    printf("enter number: ");
    scanf("%d",&n);
    i=1;
    fact=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial of %d:%d ",n,fact);
    return 0;
}

#include<stdio.h>
int main()
{
    int i,n,fact;
    printf("enter any number: ");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\nfactorial of %d: %d",n,fact);
    return 0;
}


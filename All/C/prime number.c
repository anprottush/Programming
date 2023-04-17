#include<stdio.h>
main()
{
    int i,n,prime;
    printf("enter number: ");
    scanf("%d",&n);
    prime=0;
    i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            printf("not prime number",n);
            prime=1;

    }
    else
    {
        i--;
    }
    }
    if(prime==0)
    {
        printf("prime number",n);
    }
    return 0;
}

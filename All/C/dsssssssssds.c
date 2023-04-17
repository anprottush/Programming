#include<stdio.h>
main()
{
    int n,i,sum;
    n=100;
    i=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("%d%d",sum,i);
}

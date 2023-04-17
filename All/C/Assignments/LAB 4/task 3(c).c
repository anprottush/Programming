#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
       if(n%i==0)
       {
           printf("%d ",i);
           sum=sum+i;
       }
        i++;
    }
    printf("\nsum of all divisors of %d is= %d",n,sum);
    return 0;
}

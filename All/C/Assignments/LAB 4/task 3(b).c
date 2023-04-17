#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
       if(n%i==0)
       {
           printf("%d ",i);
           count++;
       }
        i++;
    }
    printf("\n%d has total %d divisors",n,count);
    return 0;
}


#include<stdio.h>
int main()
{
    int sum,i,n;
    printf("enter any number: ");
    scanf("%d",&n);
    sum=0;
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum of all number: %d\n",sum);
    sum=0;
    i=1;
    while(i<n-1)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("Sum of all odd number: %d\n",sum);
    sum=0;
    i=2;
    while(i<n)
    {
        sum=sum+i;
        i=i+2;
    }
       printf("Sum of all even number: %d",sum);
       return 0;
}



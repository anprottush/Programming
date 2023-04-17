#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("enter number: ");
    scanf("%d",&n);
    sum=0;
    while(n>0)
    {
        i=n%10;
         n=n/10;
       printf("%d ",i);
      sum=sum+i;
    }
    printf("\nsum: %d",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int i,n,sum;
    float average;
    printf("enter number: ");
    scanf("%d",&n);
    printf("enter all number: ");
    sum=0;
    for(i=0;i<=n;i++)
    {
        printf("%d ",i);
        sum=sum+i;
        average=sum/n;
      }
       printf("\nsum: %d",sum);
       printf("\naverage: %.2f",average);

       printf("\neven: ");
       sum=0;
       for(i=0;i<=n;i=i+2)
       {
           printf("%d ",i);
           sum=sum+i;
           average=sum/n;
       }
       printf("\nsum: %d",sum);
       printf("\naverage: %.2f",average);
       printf("\nodd: ");
       sum=0;

       for(i=1;i<=n;i=i+2)
       {
           printf("%d ",i);
           sum=sum+i;
           average=sum/n;
       }
       printf("\nsum: %d",sum);
       printf("\naverage: %.2f",average);
       return 0;
}

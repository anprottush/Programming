#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("enter number: ");
    scanf("%d",&n);
    i=0;
    sum=0;
    while(i<=n)
    {
        printf("%d ",i);
       sum=sum+i;
        i++;
        }
         printf("\nsum: %d",sum);
    return 0;
}

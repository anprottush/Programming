#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
           {
                printf("%d ",i);
                sum=sum+i;
           }
    }
        printf("\nsum of %d proper divisor= %d",n,sum);
        if(sum==n)
            printf("\n%d is a perfect number",n);
        else
            printf("\n%d is not a perfect number",n);
        return 0;
}

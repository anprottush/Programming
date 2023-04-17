#include<stdio.h>
int main()
{
    float n,sum=0,i;
    printf("enter number: ");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        printf("%.2f ",(1/i));
        sum=(sum+(1/i));
    }
    printf("\nsum of series: %.2f",sum);
    return 0;
}

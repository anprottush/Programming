#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=i;k>=1;k--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

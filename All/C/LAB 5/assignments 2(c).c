#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
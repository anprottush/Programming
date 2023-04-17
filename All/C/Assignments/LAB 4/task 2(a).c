#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d ",i);
        sum=sum+i;
        i++;
    }
    printf("\nsum= %d",sum);
    return 0;
}

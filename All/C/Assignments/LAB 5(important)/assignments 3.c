#include<stdio.h>
int main()
{
    int n,i,a,b,c,rem1,rem2,rem3;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=n/10;
        rem1=n%10;
        b=a/10;
        rem2=a%10;
        c=b/10;
        rem3=b%10;
    }
    printf("reverse number: %d %d %d ",rem1,rem2,rem3);
    return 0;
}

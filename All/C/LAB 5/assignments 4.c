#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c;
    printf("enter number: ");
    scanf("%d",&n);
    printf("fibonacci series: ");
    for(i=1;i<n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}

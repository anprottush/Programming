#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    i=0;
    while(i<=n)
    {
        printf("%d ",(i*i*i));
        sum=sum+(i*i*i);
        i=i+2;
    }
    printf("\nsum= %d",sum);
    return 0;
}

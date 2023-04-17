#include<stdio.h>
int display(int p)
{
    printf("%d ",p);
}
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        display(i);
    }
}

#include<stdio.h>
int find_max(int p,int q)
{
    if(p>q)
    {
        return p;
    }
    else
    {
        return q;
    }
}
int main(void)
{
    int a=12,b=100,max;
    max=find_max(a,b);
    printf("%d",max);
    return 0;
}

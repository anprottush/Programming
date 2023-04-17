#include<stdio.h>
int find_average(int p,int q)
{
    int avg;
    avg=(p+q)/2;
    printf("%d",avg);
}
int main()
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    x=find_average(a,b);
}

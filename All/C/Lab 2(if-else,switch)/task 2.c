#include<stdio.h>
int main()
{
    int a,b,c,maximum,minimum;
    printf("enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
        maximum=a;
    else if(b>a && b>c)
             maximum=b;
    else
        maximum=c;
    if(a<b && a<c)
        minimum=a;
    else if(b<a && b<c)
        minimum=b;
    else
        minimum=c;
    printf("maximum: %d\nminimum: %d",maximum,minimum);
    return 0;
}

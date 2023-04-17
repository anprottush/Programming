#include<stdio.h>
int main()
{
    int a,b,sum,sub,prod,div;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    prod=a*b;
    div=a/b;
    printf("summation is: %d\ndifference is: %d\nproduct is: %d\nquotient is: %d\n",sum,sub,prod,div);
    return 0;
}

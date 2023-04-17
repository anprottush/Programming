#include<stdio.h>
int main()
{
    int k=0,count=15,num1,num2;
    while(k<15)
    {
        num1=count--;
        printf("%d ",num1);
        num2=--count;
        printf("%d ",num2);
        k=k+3;
    }
    return 0;
}

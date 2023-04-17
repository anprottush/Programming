#include<stdio.h>
int main()
{
    float P,T,R,simpleinterest;
    printf("enter principle: ");
    scanf("%f",&P);
    printf("enter time: ");
    scanf("%f",&T);
    printf("enter rate: ");
    scanf("%f",&R);
    simpleinterest=((P*T*R)/100);
    printf("Simple Interest is: %.2f",simpleinterest);
    return 0;
}

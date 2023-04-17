#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two number: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
        printf("higher marks in quiz 1");
    else if(num2>num1)
        printf("higher marks in quiz 2");
    else
        printf("both are equel");
    return 0;
}

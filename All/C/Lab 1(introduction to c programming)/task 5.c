#include<stdio.h>
#include<math.h>
int main()
{
    float x,f;
    printf("enter the value of x: ");
    scanf("%f",&x);
    f=((pow(x,3)+x)/(x+3.14));
    printf("the value of the function: %.2f",f);
    return 0;
}

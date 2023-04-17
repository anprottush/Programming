#include<stdio.h>
#define pi 3.14
int main()
{
    double r,circumference;
    printf("enter the radius of circle: ");
    scanf("%lf",&r);
    circumference=2*pi*r;
    printf("circumference: %.2lf",circumference);
    return 0;
}

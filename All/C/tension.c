#include<stdio.h>
#define gi 9.8
int main()
{
    float tension,m1,m2;
    printf("enter value of m1,m2: ");
    scanf("%f %f",&m1,&m2);
    tension=((2*m1*m2*gi)/(m1+m2));
    printf("tension: %.2f",tension);
    return 0;
}

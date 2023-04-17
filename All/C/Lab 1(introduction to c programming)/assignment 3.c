#include<stdio.h>
#include<math.h>
int main()
{
    float velocity,v0,a,x,x0;
    printf("enter the value of v0,a,x,x0: ");
    scanf("%f %f %f %f",&v0,&a,&x,&x0);
    velocity=sqrt(v0*v0+2*a*(x-x0));
    printf("the value of velocity: %.2f",velocity);
    return 0;
}

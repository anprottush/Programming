#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    float A,r;
    printf("enter area: ");
    scanf("%f",&A);
    r=(sqrt(A/pi));
    printf("\nradius= %.2f\n",r);
    return 0;
}

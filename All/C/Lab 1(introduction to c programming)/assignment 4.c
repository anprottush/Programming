#include <stdio.h>
#include <math.h>
#define pi 3.1416
int main()
{
    float area,radius;
    printf("area of the circle: ");
    scanf("%f",&area);
    radius=sqrt(area/pi);
    printf("radius of the circle: %.2f",radius);
    return 0;
}

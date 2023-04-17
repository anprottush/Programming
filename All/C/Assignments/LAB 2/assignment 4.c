#include<stdio.h>
int main()
{
    float base,height,area;
    printf("enter base: ");
    scanf("%f",&base);
    printf("enter height: ");
    scanf("%f",&height);
    area=((base*height)/2);
    printf("area is: %.2f",area);
    return 0;
}

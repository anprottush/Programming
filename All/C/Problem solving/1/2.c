#include<stdio.h>
int main()
{
    double length,feet;
    printf("enter length of the table in inch: ");
    scanf("%lf",&length);
    feet=length/12.00;
    printf("feet: %.2lf",feet);
    return 0;
}

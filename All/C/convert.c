#include<stdio.h>
int main()
{
    float n,m,km;
    printf("enter number: ");
    scanf("%f",&n);
    m=n/100.00;
    km=n/10000.00;
    printf("meter: %.2f\nkilometer: %.2f",m,km);
    return 0;
}

#include<stdio.h>
int main()
{
    int n,rem_500,a_500,b_100,c_50,d_20;
    printf("enter taka to buy a bi-cycle: ");
    scanf("%d",&n);
    a_500=n/500;
    rem_500=n%500;
    b_100=rem_500/100;
    c_50=rem_500/50;
    d_20=rem_500/20;
    printf("%d %d %d %d",a_500,b_100,c_50,d_20);
}

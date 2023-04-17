#include<stdio.h>
int main()
{
    int n,year,week,day,reminder;
    printf("enter number: ");
    scanf("%d",&n);
    year=n/365;
    reminder=n%365;
    week=reminder/7;
    day=reminder%7;
    printf("year: %d\nweek: %d\nday: %d",year,week,day);
    return 0;
}


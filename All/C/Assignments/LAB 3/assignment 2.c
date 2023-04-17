#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b || b==c)
        printf("This triangle is Equilateral");
    else if(a==b || a==c || b==c)
        printf("This triangle is isosceles");
    else
        printf("This triangle is Scalene");
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("this triangele is equilateral");
    }
    else if(a==b || a==c || b==c)
    {
        printf("this triangele is isosceles");
    }
    else
    {
        printf("this triangele is scalene");
    }
     return 0;
}

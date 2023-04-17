#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter three non-zero number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)>c)||((b+c)>a)||((a+c)>b))
        printf("they could represent the sides of a triangle");
    else
        printf("they could not represent the sides of a triangle");
    return 0;
}

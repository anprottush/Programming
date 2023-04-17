#include<stdio.h>
int main()
{
    int base1,base2,height1,height2,area1,area2;
    printf("enter four number: ");
    scanf("%d%d%d%d",&base1,&base2,&height1,&height2);
    area1=0.5*base1*height1;
    area2=0.5*base2*height2;
    printf("area of triangle 1: %d\narea of triangle 2: %d",area1,area2);
    if(area1>area2)
        printf("\nTriangle 1 has bigger area");
    return 0;
}

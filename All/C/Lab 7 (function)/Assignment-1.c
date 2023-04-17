#include<stdio.h>
double distance(double x1,double x2,double y1,double y2)
{
    double result;
    result=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    return result;
}
int main()
{
    double x1,x2,y1,y2,result;
    printf("Enter value of x1,x2,y1 and y2 :\n");
    scanf("%lf%lf%lf%lf",&x1,&x2,&y1,&y2);
    result=distance(x1,x2,y1,y2);
    printf("Distance between two points is %lf",result);
    return 0;
}

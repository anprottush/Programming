#include <stdio.h>
double maximum(double x,double y,double z)
{
  if(x > y)
  {
     if(x > z)
       return x;
     else
       return z;
  }
  else
  {
     if(y > z)
       return y;
     else
       return z;
  }
}
double minimum(double x,double y,double z)
{
    if(x < y)
  {
     if(x < z)
       return x;
     else
       return z;
  }
  else
  {
     if(y < z)
       return y;
     else
       return z;
  }
}
int main()
{
    double x,y,z,max,min;
    printf("Enter value of x,y and z : \n");
    scanf("%lf%lf%lf",&x,&y,&z);
    max=maximum(x,y,z);
    printf("Maximum number is %lf\n",max);
    min=minimum(x,y,z);
    printf("Minimum number is %lf",min);
    return 0;
}

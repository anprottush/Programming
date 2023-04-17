#include<stdio.h>
#include<math.h>
int main()
{
    int x,a;
    double y,b;
    scanf("%d",&x);
    scanf("%lf",&y);
    a=abs(x);
    b=fabs(y);
    printf("a= %d\nb= %.2lf",a,b);

    return 0;
}

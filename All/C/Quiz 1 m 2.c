#include<stdio.h>
int main()
{
   int x1,x2,y1,y2,distance;
   printf("Enter X1,X2,Y1,Y2");
   scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
   distance=sqrt(((x2-x1)(x2-x1))+((y2-y1)(y2-y1)));
   printf("distance is %d",distance);
   return 0
}


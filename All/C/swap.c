#include<stdio.h>
int main()
{
    int a,b,flag;               // variable decleared
    printf("enter a & b: ");
    scanf("%d%d",&a,&b);
   flag=a;
   a=b;                                      //
   b=flag;
    printf("%d %d",a,b);
}

#include<stdio.h>
int main()
{
    int fact=1,i,a,b;
    printf("enter range: ");
    scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++)
   {
       fact=fact*i;
         printf("%d ",fact);
   }


   return 0;
}

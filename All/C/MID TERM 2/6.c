#include<stdio.h>
int main()
{
   int i,p,q;
   for(i=1;i<=4;i++)
   {
     for(p=1;p<=i;p++)
     printf("%d",p);
     for(q=i;q>1;q--)
     printf("%d",q);
     printf("\n");
   }
   return 0;
}


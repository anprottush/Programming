#include<stdio.h>
int main()
{
   int a[100],i,size;
   printf("enter size of the array: ");
   scanf("%d",&size);
   printf("enter %d elements: ",size);
   for(i=0;i<size;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("\nTotal even elements: ");
   for(i=0;i<size;i++)
   {
     if(a[i]%2==0)
      {
         printf("%d ",a[i]);
      }
   }
   printf("\nTotal odd elements: ");
   for(i=0;i<size;i++)
   {
       if(a[i]%2==1)
       {
           printf("%d ",a[i]);
       }
   }
     return 0;
}



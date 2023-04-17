#include<stdio.h>
int main()
{
   int a[100],b[100],c[100],i,size;
   printf("enter size of the array: ");
   scanf("%d",&size);
   printf("enter elements in array: ");
   for(i=0;i<size;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("\neven number in array: ");
   for(i=0;i<size;i++)
   {
     if(a[i]%2==0)
      {
         //b[i]=a[i];
        printf("%d ",a[i]);
      }
   }
   printf("\nodd number in array: ");
   for(i=0;i<size;i++)
   {
       if(a[i]%2==1)
       {
           //c[i]=a[i];
           printf("%d ",a[i]);
       }
   }
     return 0;
}


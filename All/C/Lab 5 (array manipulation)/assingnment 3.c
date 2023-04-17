#include<stdio.h>
int main()
{
   int a[100],i,n,step,temp;
   printf("enter the number of elements to be sorted: ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     printf("%d.enter the element: ",i+1);
     scanf("%d",&a[i]);
   }
   for(step=0;step<n-1;step++)
   for(i=0;i<n-step-1;i++)
   {
     if (a[i]>a[i+1])
     {
       temp=a[i];
       a[i]=a[i+1];
       a[i+1]=temp;
     }
   }
   printf("\nascending order: ");
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
   return 0;
}

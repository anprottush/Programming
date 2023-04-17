#include<stdio.h>
int main()
{
   int arr[100],i,size,even=0,odd=0;
   printf("enter size of the array: ");
   scanf("%d",&size);
   printf("enter elements in array: ");
   for(i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<size;i++)
   {
     if(arr[i]%2==0)
      {
         even++;
      }
     else
      {
         odd++;
      }
   }
     printf("total even elements: %d\n",even);
     printf("total odd elements: %d\n",odd);
     return 0;
}


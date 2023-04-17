#include<stdio.h>
int main()
{
    int arr[100];
   int i,size,pos;
   printf("enter size of the array: ");
   scanf("%d",&size);
   printf("enter elements in array: ");
   for(i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("enter the position: ");
   scanf("%d",&pos);
   if (pos>=size+1)
   {
     printf("Please enter position %d", size);
   }
   else
   {
     for(i=pos-1;i<size-1;i++)
    {
       arr[i]=arr[i+1];
    }
     size--;
   }
    printf("\nElements of array after delete are: ");
    for(i=0;i<size;i++)
    {
      printf("%d ", arr[i]);
    }
      return 0;
}

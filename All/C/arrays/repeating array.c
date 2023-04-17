#include<stdio.h>
int main()
 {
     int a[100],i,j,size;
  printf("Enter size of array: ");
  scanf("%d",&size);
  printf("Enter %d elements: ",size);
  for(i=0;i<size;i++)
  {
   scanf("%d",&a[i]);
  }
  printf("no.of repeating elements are: ");
  for(i=0;i<size;i++)
   {
      for(j=i+1;j<size-3;j++)
        {
            if(a[i]==a[j])
               {
                  printf("%d ",a[i]);
               }
        }
   }
   return 0;
}

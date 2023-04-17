#include<stdio.h>
int main()
 {
  int arr[20],i,j,n;
  printf("Enter size of array: ");
  scanf("%d",&n);
  printf("Enter the elements: ",n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
  }
  printf("no.of reoeating elements are: ");
  for(i=0; i<n; i++)
   {
    for(j=i+1;j<n;j++)
    {
    if(arr[i]==arr[j])
    {
    printf("%d\n",arr[i]);
    }
   }
   }

 }

#include<stdio.h>
int main()
{
  int arr[100];
  int i,n,sum=0;
  printf("enter number of elements: ");
  scanf("%d",&n);
  printf("enter elements: ",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }
  printf("sum is: %d",sum);
  return 0;
}

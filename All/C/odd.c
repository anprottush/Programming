#include<stdio.h>
int main()
{
   int n,i,sum=0;
   printf("enter number: ");
   scanf("%d",&n);
   printf("Odd Numbers:\n ");
   i=1;
   while(i<=n-2)
  {
      printf(" %d",i);
      sum=sum+i;
      i=i+2;
  }
  printf("\nsum of odd numbers: %d",sum);
  printf("\nEven Number:\n");
  i=2;
  sum=0;
  while(i<n)
  {
      printf(" %d",i);
      sum=sum+i;
      i=i+2;
  }
  printf("\nsum of even number: %d",sum);
  return 0;
}

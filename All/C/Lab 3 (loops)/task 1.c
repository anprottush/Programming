#include<stdio.h>
int main()
{
 int i,n;
 printf("Enter any number: ");
 scanf("%d",&n);
 printf("all numbers:\n  ");
 i=1;
 while(i<=n)
 {
     printf(" %d ",i);
     i++;
 }
 printf("\nOdd Numbers:\n ");
 i=1;
 while(i<=n)
 {
  printf(" %d",i);
  i=i+2;
 }
 printf("\nEven Numbers:\n ");
 i=2;
 while(i<=n)
 {
  printf(" %d",i);
  i=i+2;
 }
   return 0;
}

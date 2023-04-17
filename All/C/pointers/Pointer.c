#include<stdio.h>
int main()
{

  int a,b;

  int *p,*q;

  p=&a;
  q=&b;


  a=8;
  b=7;



  printf("%d %d %d %d \n",*p,a,*q,b);
   p=q;

  printf("%d %d %d %d \n",*p,a,*q,b);
  a=14;
  b=12;
  printf("%d %d %d %d \n",*p,a,*q,b);

  return 0;

}

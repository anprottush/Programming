#include<stdio.h>
int main()
{
    int a=5,b=6;
    int *p,*q;
    int count = 10;
    int *ip;
    int arr[10];
    int *pa;
    pa=arr;
    pa++;
    printf("A: %d\nPa: %d\n",arr,&pa);
    p=&a;
    q=&b;
    printf("%d %d %d %d\n",*p,&a,*q,&b);
    p=q;
    printf("%d %d %d %d\n",*p,&a,*q,&b);


  ip = &count;
printf ("count = %i, *ip = %i\n", count, *ip);
*ip=4;
printf ("count = %i, *ip = %i\n", count, *ip);

return 0;
}


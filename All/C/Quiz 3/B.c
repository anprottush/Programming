#include<stdio.h>
int main()
{
    int a=30,b=20,*ptr1,*ptr2;
    ptr1=&a;
    printf("%d %d\n",ptr1,*ptr1);

    ptr2=&b;
    printf("%d %d\n",ptr2,*ptr2);

    *ptr2=*ptr1;
    printf("%d %d %d %d\n",a,b,*ptr1,*ptr2);
    return 0;
}


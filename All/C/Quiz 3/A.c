#include<stdio.h>
int main()
{
    int x=8,*ptr1,*ptr2;
    ptr1=&x;
    printf("%d %d\n",ptr1,*ptr1);

    ptr2=ptr1;
    printf("%d %d\n",ptr2,*ptr2);

    *ptr2=10;
    printf("%d %d %d\n",x,*ptr1,*ptr2);
    return 0;
}

#include<stdio.h>
int main()
{
    int a[2][3]={
                  {1,2,3},
                  {4,5,6}
                  };
    int arr[5]={10,20,30,40,50};
    int *p1,*p2;

    p1=&a[1][0];
    p2=&arr[2];
    printf("%d %d\n",*p1,*p2);
    printf("%d %d\n",*(p1+3),*(p2+3));
     printf("%d %d\n",&p1,&p2);
      printf("%d %d\n",p1,p2);
    //printf("%d ",&p);

}

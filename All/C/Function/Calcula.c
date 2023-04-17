#include<stdio.h>
int simple1(int a,int b,int c,int x);
int simple2(int a,int b,int c,int x);
int simple1(int a,int b,int c,int x)
{
    x=(++a,++b,++c,a+b+c);
    return x;
}
int simple2(int a,int b,int c,int x)
{
    x=a++,b,c;
    return x;
}
int main()
{
    int a=5,b=10,c=15,x;
    int result1=simple1(a,b,c,x);
    printf("x1= %d\n",result1);

    int result2=simple2(a,b,c,x);
    printf("x2= %d\n",result2);

    return 0;

}

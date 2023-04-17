#include<stdio.h>
#include<math.h>
int main()
{
    int a=10,b=2,c=5,res1,res2,final;
    res1=a*(pow(b,3));
    res2=c*c/a-b;
    final=res1+res2;
    printf("%d %d %d\n",res1,res2,final);
    return 0;
}

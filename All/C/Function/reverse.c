#include<stdio.h>
int find_reverse(int p)
{
    int i,a,b,c,rem1,rem2,rem3,x,y,z;
    for(i=1;i<=p;i++)
    {
        a=p/10;
        rem1=p%10;
        b=a/10;
        rem2=a%10;
        c=b/10;
        rem3=b%10;
    }
      printf("reverse number: %d %d %d ",rem1,rem2,rem3);
      return ;
}
int main()
{
    int n,x,y,z;
    printf("enter number: ");
    scanf("%d",&n);
    find_reverse(n);
   return 0;
}

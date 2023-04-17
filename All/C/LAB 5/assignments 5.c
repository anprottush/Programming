#include<stdio.h>
int main()
{
    int n,i,flag=1;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
       {
           flag=0;
       }
     }
     if(flag==1)
     {
         printf("prime number");
     }
     else
     {
         printf("not prime number");
     }
    return 0;
}

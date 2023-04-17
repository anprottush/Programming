#include<stdio.h>
int main()
{
    int i,n,sum,temp,rem;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=n;
        sum=0;
       while(temp!=0)
       {
           rem=temp%10;
           sum=sum+(rem*rem*rem);
           temp=temp/10;
       }
    }
    if(sum==n)
       {
        printf("Armstrong number ");
       }
       else
       {
           printf("not Armstrong number ");
       }
     return 0;
}



#include<stdio.h>
int main()
{
    int i,a,b,sum,temp,rem;
    printf("enter number: ");
    scanf("%d%d",&a,&b);
    printf("armstrong numbers: ");
    for(i=a;i<=b;i++)
    {
        temp=i;
        sum=0;
       while(temp!=0)
       {
            rem=temp%10;
           sum=sum+(rem*rem*rem);
           temp=temp/10;
       }
       if(sum==i)
       {
        printf("%d ",i);
       }
    }
    return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b,sum,temp,rem;
    printf("enter range: ");
    scanf("%d%d",&a,&b);
    printf("all happy numbers: ");
    for(i=a;i<=b;i++)
    {
        temp=i;
        sum=0;
       while(temp>0)
       {
            rem=temp%10;
           sum=sum+(pow(rem,4));          //HAPPY NUMBER
           temp=temp/10;
       }
       if(sum==i)
       {
        printf("%d ",i);
       }
    }
    return 0;
}

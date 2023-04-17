#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b,sum,temp1,temp2,rem;
    printf("enter number: ");
    scanf("%d%d",&a,&b);
    printf("armstrong numbers: ");
    for(i=a;i<=b;i++)
    {
        sum=0;
        temp1=i;
        temp2=i;
       while(temp1>0)
       {
            rem=temp1%10;
           sum=sum+(pow(rem,3));
           temp1=temp1/10;
       }
       if(sum==temp2)
       {
        printf("%d ",sum);
       }
    }
    return 0;
}


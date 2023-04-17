#include<stdio.h>
int main()
{
    int i,n,num,sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("Enter number: ",i);
      scanf("%d",&num);
      if(num==0)
      {
            break;
        }
         sum=sum+num;
    }
    printf("sum is %d",sum);
    return 0;
}

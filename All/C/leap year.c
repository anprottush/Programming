#include<stdio.h>
main()
{
    int j,n,sum=0;
    printf("enter number: ");
    scanf("%d",&n);
    j=1;
    while(j<n)
     {
         j++;
       if(j%2==0)
       {
           sum=sum+j;
       }
     }
    printf("sum of all even number: %d",sum);
    return 0;
}


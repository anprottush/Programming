#include<stdio.h>
int main()
{
    int n,num,number,product,i,j;
    printf("How Many table number starting from 1 : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("\nEnter Number which multiplication you want: ");
        scanf("%d",&number);
        printf("\nHow Many Multiplication you need: ");
        scanf("%d",&num);
        for(j=0; j<=num; j++)
        {
            if(j==3||j==5)
            {
                continue;
            }

            else
            {
                product=number*j;
                printf("%d X %d = %d \n",number,j,product);
            }
        }
    }
}

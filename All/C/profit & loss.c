#include<stdio.h>
int main()
{
    int sp,bp;
    int profit,loss;
    int x,y;
    printf("enter selling price: ");
    scanf("%d",&sp);
    printf("enter buying price: ");
    scanf("%d",&bp);
    if(sp>bp)
    {
        profit=sp-bp;
         printf("\nprofit: %d taka",profit);
        x=(profit*100)/sp;
         printf("\n\nhow to percent of profit: %d percent",x);
     }
    else if(bp>sp)
    {
        loss=bp-sp;
         printf("\nloss: %d taka",loss);
        y =(loss*100)/sp;
        printf("\n\nhow to percent of loss: %d percent",y);
    }
    else
        printf("no profit & loss");
     return 0;
}

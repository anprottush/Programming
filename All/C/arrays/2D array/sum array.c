#include<stdio.h>
int main(void)
{
    int a[100][100],b[100][100],sum[100][100];
    int i,j,row,column;
    printf("enter size of row & column: ");
    scanf("%d%d",&row,&column);
    printf("enter elements: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&b[i][j]);
        }

    }
    printf("sum is: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n\t");
    }
    return 0;
}

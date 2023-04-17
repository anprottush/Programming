#include<stdio.h>
int main()
{
    int a[100][100];
    int i,j,row,column,sum;
    printf("enter size of row & column: \n");
    scanf("%d%d",&row,&column);
    printf("enter elements: \n");
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
            printf("%d ",a[i][j]);
        }
         printf("\n");
    }
    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<column;j++)
        {
            sum=sum+a[i][j];
        }
        printf("%d ",sum);

    }

    return 0;
}

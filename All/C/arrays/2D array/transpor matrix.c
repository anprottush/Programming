#include<stdio.h>
int main()
{
    int a[100][100];
    int i,j,row,column;
    printf("enter size of row & column: ");
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
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}

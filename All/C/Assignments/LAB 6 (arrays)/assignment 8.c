#include<stdio.h>
int main()
{
    int a[100][100];
    int i,j,row,column,flage=1;
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
            if(a[i][j]!=1 && a[i][j]!=0)
            {
                flage=0;
                break;
            }
            else
            {
                flage=1;
            }
        }
    }
    if(flage==1)
    {
        printf("The matrix is an Identity matrix");
    }
    else
    {
        printf("The matrix is not an Identity matrix");
    }
    return 0;
}

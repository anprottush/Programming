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
            if((i==j && a[i][j]!=1) ||(i!=j && a[i][j]!=0))
            {
                flage=0;
                break;
            }
        }
    }
    if(flage==1)
    {
        printf("identity matrix");
    }
    else
    {
        printf("not identity matrix");
    }
    return 0;
}

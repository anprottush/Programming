#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],multiply[100][100];
    int i,size,row,column,sum;
    printf("enter size of row & column: ");
    scanf("%d",&size);
    printf("enter elements of matrix 1: \n");
    for(row=0;row<size;row++)
    {
        for(column=0;column<size;column++)
        {
            scanf("%d",&a[row][column]);
        }
    }
    printf("enter elements of matrix 2: \n");
    for(row=0;row<size;row++)
    {
        for(column=0;column<size;column++)
        {
            scanf("%d",&b[row][column]);
        }
    }
    for(row=0;row<size;row++)
    {
        for(column=0;column<size;column++)
        {
            sum=0;
            for(i=0;i<size;i++)
            {
                sum=sum+a[row][i]*b[i][column];
            }
            multiply[row][column]=sum;
        }
    }
     printf("Product of both matrix are: \n");
     for(row=0;row<size;row++)
    {
        for(column=0;column<size;column++)
        {
            printf("%d ",multiply[row][column]);
        }
        printf("\n");
    }
    return 0;
}

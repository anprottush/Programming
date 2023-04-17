#include<stdio.h>
int main()
{
    int a[100][100];
    int i,j,row,column,max=0,min=0;
    printf("enter size of array: ");
    scanf("%d%d",&row,&column);
    printf("enter elements: ");
    for(i=0;i<row;i++)
    {
       for(j=0;j<column;j++)
       {
            scanf("%d",&a[i][j]);
       }
    }
    max=a[0][0];
    min=a[0][0];
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(max<a[i][j])
           {
              max=a[i][j];
           }
        else
           {
              max=max;
           }
        }
    }
    printf("maximum: %d ",max);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(min>a[i][j])
           {
              min=a[i][j];
           }
        else
            {
                min=min;
            }
        }
    }
    printf("\nminimum: %d",min);
    return 0;
}

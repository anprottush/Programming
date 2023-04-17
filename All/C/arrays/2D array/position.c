#include<stdio.h>
int main()
{
       int i,j,row,column,search;
       printf("enter size of row & column: ");
       scanf("%d%d",&row,&column);
       int a[row][column];
       printf("enter elements: ");
       for(i=0;i<row;i++)
       {
           for(j=0;j<column;j++)
           {
               scanf("%d",&a[i][j]);
           }
       }
       printf("Enter the number you want to search: ");
       scanf("%d",&search);
       for(i=0;i<row;i++)
       {
           for(j=0;j<column;j++)
            {
                if(a[i][j]==search)
                {
                    printf("The position is: (%d,%d)",i,j);
                }
             }
        }
        return 0;
}

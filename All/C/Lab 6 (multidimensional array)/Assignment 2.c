#include <stdio.h>
#define size 3
int main()
{
    int A[size][size];
    int row,col,isIdentity;
    printf("Enter elements in matrix of size 3x3: \n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    isIdentity = 1;
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            if(row==col && A[row][col]!=1)
            {
                isIdentity=0;
            }
            else if(row!=col && A[row][col]!=0)
            {
                isIdentity=0;
            }
        }
    }
    if(isIdentity==1)
    {
        printf("\nThe given matrix is an Identity Matrix.\n");
        for(row=0;row<size;row++)
        {
            for(col=0;col<size;col++)
            {
                printf("%d ", A[row][col]);
            }
               printf("\n");
        }
    }
    else
    {
        printf("The given matrix is not an Identity Matrix");
    }
       return 0;
}

#include <stdio.h>
#define size 3
int main()
{
    int A[size][size];
    int B[size][size];
    int C[size][size];
    int row, col, i, sum;
    printf("Enter elements in matrix A of size 3x3: \n",size,size);
    for(row=0;row<size;row++)
    {
      for(col=0;col<size;col++)
        {
          scanf("%d",&A[row][col]);
        }
    }
    printf("\nEnter elements in matrix B of size 3x3: \n",size,size);
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&B[row][col]);
        }
    }
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            sum=0;
            for(i=0;i<size;i++)
            {
                sum+=A[row][i]*B[i][col];
            }

            C[row][col]=sum;
        }
    }
    printf("\nProduct of both matrix A * B= \n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            printf("%d ",C[row][col]);
        }
        printf("\n");
    }

    return 0;
}

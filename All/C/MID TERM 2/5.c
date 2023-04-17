#include<stdio.h>
#define size 3
int main()
{
  int A[size][size];
  int nr,nc,row,column,i;
  printf("Enter the number of row and column: ");
  scanf("%d %d",&nr,&nc);
  if(nr==nc)
  {
    printf("Enter elements of the matrix: \n");
    for(row=0;row<nr;row++)
      for(column=0;column<nc;column++)
        scanf("%d",&A[row][column]);

    i=1;
    for(row=0;row<nr;row++)
      for(column=0;column<nc;column++)
        if(row==column)
        {
	       if(A[row][column]==0)
	         i=0;
        }
        else
        {
	       if(A[row][column]!=0)
	         i=0;
        }
    if(i==1)
      printf("The matrix is a diagonal Matrix");
    else
      printf("The matrix is not a diagonal Matrix");
  }
    return 0;
}

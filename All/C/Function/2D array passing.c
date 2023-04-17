#include<stdio.h>
int find_average(int a[100][100],int p,int q)
{
    int i,j,avg,sum=0;
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
           sum=sum+a[i][j];
        }
    }
    avg=sum/q;
    printf("%d",avg);
}
int main()
{
    int a[100][100];
    int avg,row,column,i,j,sum=0;
    printf("enter size of row & column: ");
    scanf("%d %d",&row,&column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    avg=find_average(&a[0][0],row,column);

    return 0;

}

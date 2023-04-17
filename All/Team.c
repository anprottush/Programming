#include<stdio.h>
int main()
{
    int a[100][100];
    int size,i,j,flag=0;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        for(j=0;j<3;j++)
          {
            scanf("%d",&a[i][j]);
          }
    }
    for(i=0;i<size;i++)
    {
        int sum=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
            {
                sum++;
            }
        }
        if(sum>1)
        {
          flag++;
        }
    }
    printf("%d",flag);
    return 0;


}

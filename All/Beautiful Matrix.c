#include<stdio.h>
#include<math.h>
int main()
{
    int a[100][100],i,j,ans,x=0,y=0;
    for(i=0; i<5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(a[i][j]==1)
            {
                y=j;
                x=i+1;
            }
        }
    }
    ans=fabs(x-3)+fabs(y-3);
    printf("%d\n",ans);
}

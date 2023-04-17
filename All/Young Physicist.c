#include<stdio.h>
int main()
{
    int a[100][100],i,j,n,sum=0,k=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            sum+=a[j][i];
        }
        if(sum==0)
        {
            k++;
        }
        else

        {
            break;
        }
    }
    if(k==3)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

}

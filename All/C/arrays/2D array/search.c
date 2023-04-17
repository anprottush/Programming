#include<stdio.h>
int main()
{
    int a[100][100];
    int i,j,size,search,flage=0;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("enter elements: \n");
    for(i=0;i<size;i++)
      {
        for(j=0;j<size;j++)
        {
           scanf("%d",&a[i][j]);
        }

    }
    printf("enter search elements: ");
    scanf("%d",&search);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
           {
            if(a[i][j]==search)
              {
                flage=1;
                break;
              }
            else
              {
            flage=0;
              }
           }

    }
    if(flage==1)
    {
        printf("found ");
     }
    else
    {
        printf("not found");
    }
    return 0;
}


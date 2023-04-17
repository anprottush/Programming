#include<stdio.h>
int main()
{
    int a[100],i,size,search,flage=0;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("enter elements: ");
    for(i=0;i<size;i++)
        {
           scanf("%d",&a[i]);
        }
    printf("enter search elements: ");
    scanf("%d",&search);
    for(i=0;i<size;i++)
        {
           if(a[i]==search)
              {
                flage=1;
                break;
              }
           else
              {
                flage=0;
              }
        }
    if(flage==1)
    {
        printf("found \nposition is: %d \nindex is: %d",i+1,i);
     }
    else
    {
        printf("not found \nposition is: out of range");
    }
    return 0;
}

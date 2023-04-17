#include<stdio.h>
int main()
{
    int a[100];
    int i,size,search,flage=0;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("Input array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search: ");
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
        printf("The element exists");
    }
    else
    {
        printf("The element not exists");
    }
    return 0;
}

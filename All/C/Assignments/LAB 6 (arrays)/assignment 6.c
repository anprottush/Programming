#include<stdio.h>
int main()
{
    int a[100];
    int i,size,position,delete;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("enter %d elements: ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position of the element to be  delete: ");
    scanf("%d",&position);
    for(i=position+1;i<size;i++)
        {
            a[i-1]=a[i];
        }
    printf("after delete array are: ");
    for(i=0;i<size-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}



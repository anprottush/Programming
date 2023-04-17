#include<stdio.h>
int main()
{
    int array[100];
    int i,size,position;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("enter %d elements: ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter the position of the element to be delete: ");
    scanf("%d",&position);
     for(i=position+1;i<size;i++)
        {
            array[i-1]=array[i];
        }
    printf("after delete array are: ");
    for(i=0;i<size-1;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}

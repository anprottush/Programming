#include<stdio.h>
int main()
{
    int a[100];
    int i,size,max=0,min=0;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("enter %d elements: ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<size;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        else
        {
            max=max;
        }
    }
    printf("maximum: %d ",max);
    for(i=0;i<size;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        else
        {
            min=min;
        }
    }
    printf("\nminimum: %d",min);
    return 0;
}

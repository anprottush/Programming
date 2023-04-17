#include<stdio.h>
int main()
{
    int a[100],size,i,fact=1;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("enter %d elements of array: ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<size;i++)
    {
        fact=fact*a[i];
    }
    printf("\nfactorial is: %d",fact);
    return 0;
}

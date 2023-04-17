#include<stdio.h>
int main()
{
    int a[100];
    int i,size,even=0,odd=0;
    printf("enter size of array: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        if(a[i]%2==1)
        {
            odd++;
        }
    }
    printf("\nEven= %d",even);
    printf("\nOdd= %d",odd);
    return 0;
}

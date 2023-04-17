#include<stdio.h>
int main()
{
    int a[100];
    int i,size,largest,second_largest;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("enter %d elements: ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++)
    {
        if(largest<a[i])
        {
            second_largest=largest;
            largest=a[i];
        }
        else if(second_largest<a[i])
        {
            second_largest=a[i];
        }
     }
    printf("Second Largest: %d",second_largest);
    return 0;
}

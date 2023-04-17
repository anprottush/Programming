#include<stdio.h>
int main()
{
    int arr[5],i,n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("the elements are:");
    for(i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
    return 0;
}

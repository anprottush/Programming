#include <stdio.h>
int sum(int a[],int i,int n)
{
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int main()
{
    int n,i,s;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=sum(a,i,n);
    printf("Sum is %d.",s);
    return 0;
}

#include<stdio.h>
int find_average(int a[100],int p)
{
    int i,avg,sum=0;
    for(i=0;i<p;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/p;
    printf("%d",avg);
    return avg;
}
int main()
{
    int a[100];
    int avg,i,size;
    printf("enter size of array: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    find_average(&a[0],size);

}

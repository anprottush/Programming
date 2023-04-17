#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,n;
    int sum=0,average1,average2;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    printf("Enter salaries of company1: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter salaries of company2: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("company 1: ");
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        average1=sum/n;
    }
    printf("sum: %d\naverage: %d",sum,average1);
    printf("\ncompany 2: ");
    for(i=0;i<n;i++)
    {
        sum=sum+b[i];
        average2=sum/n;
    }
    printf("sum: %d\naverage: %d",sum,average2);
    if(average1<average2)
    {
        printf("\ncompany 2 has higher average salary");
    }
    return 0;
}

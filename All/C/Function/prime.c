#include<stdio.h>
int find_prime(int p)
{
    int i,count=0;
    for(i=1;i<=p;i++)
    {
        if(p%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }

}
int main()
{
    int a,x;
    scanf("%d",&a);
    x=find_prime(a);
}

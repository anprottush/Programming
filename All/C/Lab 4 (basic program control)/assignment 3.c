#include<stdio.h>
int main()
{
    int num,reverse;
    printf("Enter the number: ");
    scanf("%d",&num);
    reverse=0;
    while(num!=0)
    {
        reverse=reverse*10;
        reverse=reverse+num%10;
        num=num/10;
    }
    printf("Reverse= % d ",reverse);
    return 0;
}

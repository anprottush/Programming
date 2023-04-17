#include<stdio.h>
int main()
{
    int n,i,reverse=0,reminder;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        reminder=i%10;
        reverse=(reverse*10)+reminder;
    }
    printf("reverse is: %d",reverse);
    if(n==reverse)
    {
        printf("\npolindrome");
    }
    else
    {
        printf("\nnot polindrome");
    }
    return 0;
}

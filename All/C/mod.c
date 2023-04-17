#include<stdio.h>
int main()
{
    int n,mod,a;
    printf("enter number: ");
    scanf("%d",&n);
    mod=n%10;
    a=(n-mod)/10;
    printf("mod= %d\n",mod);
    printf("%d",a);
    return 0;
}

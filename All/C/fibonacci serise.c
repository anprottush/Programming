#include<stdio.h>
main()
{
    int i,a,b,c,n;
    a=0;
    b=1;
    printf("enter number of series: ");
    scanf("%d",&n);
    printf("\nfibonacci series: ");
    printf("%d, %d, ",a,b);
    i=1;
    while(i<n)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
        printf("%d, ",c);
    }
    return 0;
}

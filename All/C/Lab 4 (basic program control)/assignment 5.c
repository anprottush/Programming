#include<stdio.h>
main()
{
    int i,a,b,c,terms;

    printf("enter number of terms: ");
    scanf("%d",&terms);
    printf("\nfibonacci series: ");
 printf("%d, %d, ",a,b);
    for(i=1;i<terms;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d, ",c);
    }
    return 0;
}


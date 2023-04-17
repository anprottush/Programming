#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    i=1;
    while(i<=n)               //outer loop
    {
        j=5;
        while(j>=i)           //inner loop
        {
            printf(" ");
            j--;
        }
        k=1;
        while(k<=i)
        {
            printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

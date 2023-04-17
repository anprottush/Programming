#include<stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if((n>=90)&&(n<=100))
        printf("\ngrade is A");
    else if((n>=80)&&(n<=89))
        printf("\ngrade is B");
    else if((n>=70)&&(n<=79))
        printf("\ngrade is C");
    else if((n>=60)&&(n<=69))
        printf("\ngrade is D");
    else if((n>=0)&&(n<=59))
        printf("\ngrade is F");
    else if(n>100)
        printf("\ninvalid input");
    return 0;
}






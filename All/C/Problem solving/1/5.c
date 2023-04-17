#include<stdio.h>
int main()
{
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    if(age>=25 && age<=30)
        printf("can apply");
    else if(age==20)
        printf("less than age requirement");
    else if(age==35)
        printf("more than age requirement");
    else if(age==27)
        printf("age requirement");
    else
        printf("can not apply");
    return 0;
}

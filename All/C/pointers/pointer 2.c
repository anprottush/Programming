#include<stdio.h>
int main()
{
    int i,*pi=&i;
    char c,*pc=&c;
    float f,*pf=&f;
    double d,*pd=&d;

    printf("%d %d %d %d \n",pi,pc,pf,pd);
    pc++; pi++; pf++; pd++;
    printf("%d %d %d %d \n",pi,pc,pf,pd);


}

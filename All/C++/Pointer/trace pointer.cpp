#include<bits/stdc++.h>
void swap2(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
 *b = tmp;
}
int main()
{
int x0=5, x1=2, x2=3;
int *p1=&x1, *p2=&x2;
swap2(&x0, &x1);
swap2(p1, p2);
printf("%d %d %d\n",x0, x1, x2);
return 0;
}


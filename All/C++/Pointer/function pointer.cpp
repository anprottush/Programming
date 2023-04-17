#include<iostream>
using namespace std;
int sum(int *p,int *q)
{
    int s=0;
    s=*p+*q;
cout<<s;
    return s;

}
int main()
{
    int a=10, b=20,s;
    sum(&a,&b);
}

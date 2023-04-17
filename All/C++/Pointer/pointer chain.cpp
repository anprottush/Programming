#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p,**q,***r;
    p=&a;
    q=&p;
    r=&q;
    cout<<a<<endl<<*p<<endl<<**q<<endl<<***r;
}

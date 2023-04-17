#include<iostream>
using namespace std;
int main()
{
    int a=100;
    float b=4.56;
    double c=6.4587;
    string ch="ABCDE";
    int *i=&a;
    float *f=&b;
    double *d=&c;
    string *s=&ch;
    cout<<*i<<endl<<*f<<endl<<*d<<endl<<*s<<endl;
}

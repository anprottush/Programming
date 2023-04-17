#include<iostream>
using namespace std;

template<class t>
class num{

protected:
    t n;

public:
    num(t a)
    {
       n=a;
    }
    num()
    {
      n=0;
    }
num operator+(num &a)
{
    num x;
    x.n=n+a.n;
    return x;
}
num operator-(num &a)
{
    num x;
    x.n=n-a.n;
    return x;
}
num operator*(num &a)
{
    num x;
    x.n=n*a.n;
    return x;
}
num operator/(num &a)
{
    num x;
    x.n=n/a.n;
    return x;
}
void show(){
cout<<"Result="<<n;
}
};
 int main()
 {
     double x,y;
     char ch;
     cout<<"Enter First number:";
     cin>>x;
     cout<<"Enter Second number:";
     cin>>y;
     cout<<"Enter Operator:(+,-,*,/):";
     cin>>ch;
     num<double>a(x);
     num<double>b(y);
     num<double>c;
     if(ch=='+')
    {
        c=a+b;
        c.show();
    }
    else if(ch=='-')
    {
        c=a-b;
        c.show();
    }
    else if(ch=='*')
    {
        c=a*b;
        c.show();
    }
    else if(ch=='/')
    {
        c=a/b;
        c.show();
    }
    return 0;
}


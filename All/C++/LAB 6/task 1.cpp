#include<iostream>
using namespace std;
template<class T>
class number
{
    T n;
public:
    number(T a)
    {
       n=a;
    }
    number()
    {
      n=0;
    }
number operator+(number &a)
{
    number x;
    x.n=n+a.n;
    return x;
}
number operator-(number &a)
{
    number x;
    x.n=n-a.n;
    return x;
}
number operator*(number &a)
{
    number x;
    x.n=n*a.n;
    return x;
}
number operator/(number &a)
{
    number x;
    x.n=n/a.n;
    return x;
}
void show()
   {
      cout<<"Result="<<n;
   }
};
int main()
{
     double x,y;
     char ch;
     cout<<"enter first number: ";
     cin>>x;
     cout<<"enter second number: ";
     cin>>y;
     cout<<"enter operator(+,-,*,/): ";
     cin>>ch;
     number<double>a(x);
     number<double>b(y);
     number<double>c;
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

#include<iostream>
using namespace std;
class integer
{
    int a,b;
public:
    integer(int,int);
    void input()
    {
        cout<<"a="<<a<<endl<<"b="<<b;
    }
};
integer::integer(int x,int y)
{
    a=x;
    b=y;
}
int main()
{
    integer int1(400,100);
    integer int2=integer(25,75);
    cout<<"object1"<<endl;
    int1.input();
    cout<<endl<<"object2"<<endl;
    int2.input();
    return 0;
}


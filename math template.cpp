#include<iostream>
using namespace std;
template<class T1,class T2>
class number
{
private:
    T1 a;
    T2 b;
public:
    number(T1 x,T2 y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"addition: "<<a+b<<endl;
        cout<<"subtraction: "<<a-b<<endl;
        cout<<"multiplication: "<<a*b<<endl;
        cout<<"division: "<<a/b<<endl;
    }
};
int main()
{
    int a,b;
    float p,r;
    cout<<"Integer: "<<endl;
    cin>>a>>b;
    number<int,int>n1(a,b);
    n1.show();
    cout<<endl<<"Floating: "<<endl;
    cin>>p>>r;
    number<float,float>n2(p,r);
    n2.show();
    return 0;
}

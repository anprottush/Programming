#include<iostream>
using namespace std;
template<class T1,class T2>
class test
{
private:
    T1 a;
    T2 b;
public:
    test(T1 x,T2 y)
    {
        a=x;
        b=y;
    }
    void show()
    {
       cout<<a<<" and "<<b<<endl;
    }
};
int main()
{
    test <int,int> t1(4,5);
    test <float,float> t2(6.6,7.7);
    t1.show();
    t2.show();
    return 0;
}

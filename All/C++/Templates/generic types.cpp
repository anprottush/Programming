#include<iostream>
using namespace std;
template<class T1,class T2>
void show(T1 x,T2 y)
    {
        cout<<x<<" and "<<y<<endl;
    }
int main()
{
    show(4,5);
    show(6.6,7.7);
    return 0;
}

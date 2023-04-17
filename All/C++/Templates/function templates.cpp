#include<iostream>
using namespace std;
template<class T>
T sum(T a,T b)
{
    T result;
    result=a+b;
    return result;
}
int main()
{
    int i=5,j=4,k;
    double f=4.5,g=7.8,h;
    k=sum(i,j);
    h=sum(f,g);
    cout<<k<<endl<<h;
    return 0;
}

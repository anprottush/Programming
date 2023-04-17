#include<iostream>
using namespace std;
template<class T>
void display(T x)
{
    cout<<"template display: "<<x<<endl;
}
void display(double x)
{
    cout<<"explicit display: "<<x<<endl;
}
int main()
{
    display(100);
    display(12.83);
    display('c');
    return 0;
}

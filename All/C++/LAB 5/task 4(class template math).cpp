#include<iostream>
using namespace std;
template<class T>
class calculator
{
    T a,b;
public:
    calculator(T x,T y)
    {
        a=x;
        b=y;
    }
    T add()
    {
        return a+b;
    }
    T subtract()
    {
        return a-b;
    }
    T multiply()
    {
        return a*b;
    }
    T divide()
    {
        return a/b;
    }
    void show()
    {
        cout<<"numbers are: "<<a<<" and "<<b<<endl;
        cout<<"addition is: "<<add()<<endl;
        cout<<"subtraction is: "<<subtract()<<endl;
        cout<<"product is: "<<multiply()<<endl;
        cout<<"division is: "<<divide()<<endl;
    }
};
int main()
{
    calculator <int> c1(2,1);
    calculator <float> c2(2.4,1.2);
    cout<<"integer results: "<<endl;
    c1.show();
    cout<<"float results: "<<endl;
    c2.show();
    return 0;
}

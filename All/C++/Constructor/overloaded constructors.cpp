#include<iostream>
using namespace std;
class complex
{
private:
    float a,b;
public:
    complex()
    {

    }
    complex(float x)
    {
        a=x;
        b=x;
    }
    complex(float real,float imag)
    {
       a=real;
       b=imag;
    }
    friend complex sum(complex,complex);
    friend void show(complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    return c3;
}
void show(complex c)
{
    cout<<c.a<<"+i"<<c.b<<endl;
}
int main()
{
    complex A(2.7,3.5);
    complex B(1.6);
    complex C;
    C=sum(A,B);
    cout<<"A= ";show(A);
    cout<<"B= ";show(B);
    cout<<"C= ";show(C);
    complex P,Q,R;
    P=complex (2.7,3.5);
    Q=complex (1.6);
    R=sum(P,Q);
    cout<<endl;
    cout<<"P= ";show(P);
    cout<<"Q= ";show(Q);
    cout<<"R= ";show(R);
    return 0;
}

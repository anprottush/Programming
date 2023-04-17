#include<iostream>
using namespace std;
class A
{
    int a;
public:
    int b;
    void get_ab();
    int get_a(void);
    void show_a(void);
};
class B:private A
{
    int c;
public:
    void mul(void);
    void display(void);
};
void A::get_ab(void)
{
    a=5;
    b=10;
}
int A::get_a()
{
    return 0;
}
void A::show_a()
{
    cout<<"a= "<<a<<endl;
}
void B::mul()
{
    c=b*get_a();
}
void B::display()
{
    show_a();
    cout<<"a= "<<get_a()<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;
}
int main()
{
    B b;
    //b.get_ab();
    b.mul();
    //b.show_a();
    b.display();
    //b.b=5;
    b.mul();
    b.display();
    return 0;
}

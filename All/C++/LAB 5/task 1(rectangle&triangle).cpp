#include<iostream>
using namespace std;
class shape
{
protected:
    double x,y;
public:
    void get_data(double a,double b)
    {
        x=a;
        y=b;
    }
};
class rectangle:public shape
{
public:
    double display_area()
    {
        cout<<"Area of rectangle: ";
        return x*y;
    }
};
class triangle:public shape
{
public:
    double display_area()
    {
        cout<<"Area of triangle: ";
        return (x*y)/2;
    }
};
int main()
{
    rectangle r;
    triangle t;
    shape *s1=&r;
    shape *s2=&t;
    s1->get_data(4,5);
    s2->get_data(4,5);
    cout<<r.display_area()<<endl;
    cout<<t.display_area()<<endl;
    return 0;
}

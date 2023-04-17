#include<iostream>
using std::cout;
using std::endl;
class point
{
protected:
    int width,height;
public:
    void get_data(int a,int b)
    {
        width=a;
        height=b;
    }
    virtual int area()
    {
        return 0;
    }
};
class rectangle:public point
{
public:
    int area()
    {
        return width*height;
    }
};
class triangle:public point
{
public:
    int area()
    {
        return (width*height)/2;
    }
};
int main()
{
    rectangle r;
    triangle t;
    point p;
    point *p1=&r;
    point *p2=&t;
    point *p3=&p;
    p1->get_data(4,5);
    p2->get_data(4,5);
    p3->get_data(4,5);
    cout<<r.area()<<endl<<t.area()<<endl<<p.area()<<endl;
    return 0;
}

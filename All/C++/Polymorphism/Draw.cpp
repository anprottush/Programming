#include<iostream>
using namespace std;
class shape
{
protected:
    int width,height;
public:
    //void draw(int a,int b)
    draw(int a,int b)//:width(a),height(b)
    {
        width=a;
        height=b;
    }
    virtual int draw()=0;
    void printdraw()
    {
        cout<<this->draw()<<endl;
    }
};
class circle:public shape
{
public:
    int draw()
    {
        return (3.1416*width*width);
    }
};
class box:public shape
{
public:
    int draw()
    {
        return width*height;
    }
};
class triangle:public shape
{
public:
    int draw()
    {
        return (width*height)/2;
    }
};
class rectangle:public shape
{
public:
    int draw()
    {
        return width*height;
    }
};
int main()
{
    circle c;
    box b;
    triangle t;
    rectangle r;
    shape *s1=new circle(4,0);

    //shape *s1=&c;
    //shape *s2=&b;
    //shape *s3=&t;
    //shape *s4=&r;
    //s1->draw(4,0);
    //s2->draw(4,5);
    //s3->draw(4,5);
    //s4->draw(4,5);
    s1->printdraw();
    s2->printdraw();
    s3->printdraw();
    s4->printdraw();
    //cout<<c.draw()<<endl<<b.draw()<<endl<<t.draw()<<endl<<r.draw()<<endl;
    return 0;
}

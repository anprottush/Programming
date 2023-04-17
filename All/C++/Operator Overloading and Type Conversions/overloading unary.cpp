#include<iostream>
using namespace std;
class space
{
    int x,y,z;
public:
    void setdata(int a,int b,int c);
    void display();
    friend void operator-(space &s);
     void operator *();
};
void space::setdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void space::display()
{
    cout<<"S: "<<x<<" "<<y<<" "<<z<<endl;
}
void operator-(space &s)
{
    s.x=-s.x;
    s.y=-s.y;
    s.z=-s.z;
}

void space::operator *()
{
    x*x;
    y*y;
    z*z;
}
int main()
{
    space s,s1,s2;
    s.setdata(2,2,3);
    s1.display();
    s.display();
    -s;
    s.display();


    return 0;
}

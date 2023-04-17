#include<iostream>
using namespace std;
class number
{
    float x,y;
public:
    number()
    {
        x=0;
        y=0;
    }
    number(float real,float img)
    {
        x=real;
        y=img;
    }
    number operator+(number n);
    void display();
};
number number:: operator+(number n)
{
    number num;
    num.x=x+n.x;
    num.y=y+n.y;
    return num;
}
void number::display()
{
    cout<<x<<" + i"<<y<<endl;
}
int main()
{
    number n1(2.3,3.8),n2(4.5,8.4),n3;


    n3=n1+n2;
    cout<<"n1= ";
    n1.display();
    cout<<"n2= ";
    n2.display();
    cout<<"n3= ";
    n3.display();
    return 0;
}

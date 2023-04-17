#include<iostream>
using namespace std;
class number
{
    float x,y;
public:
    number()
    {

    }
    number(float a,float b)
    {
        x=a;
        y=b;
    }
    number operator+(number);
    number operator-(number);
    number operator*(number);
    number operator/(number);
    void display();
};
number number::operator-(number n)
{
    number num;
    num.x=x+n.x;
    num.y=y+n.y;
    return num;
}
void number::display()
{
    cout<<x<<" "<<y<<endl;
}
int main()
{
    number n1(2.3,4.3),n2,n3;

    n3=n1;
    cout<<"n1= ";
    n1.display();
    cout<<"n3= ";
    n3.display();
    return 0;
}

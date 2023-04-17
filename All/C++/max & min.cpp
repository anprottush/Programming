#include<iostream>
using namespace std;
class number
{
    public:
    void display(int x,int y,int z)
    {
        cout<<"enter number:";
        cin>>x>>y>>z;
        if(x>y && x>z)
        {
            cout<<"maximum is:"<<x;
        }
        else if(y>x && y>z)
        {
            cout<<"maximum is:"<<y;
        }
        else
        {
            cout<<"maximum is:"<<z;
        }
        if(x<y && x<z)
        {
            cout<<endl<<"minimum is:"<<x;
        }
        else if(y<x && y<z)
        {
            cout<<endl<<"minimum is:"<<y;
        }
        else
        {
            cout<<endl<<"minimum is:"<<z;
        }
    }
};
int main()
{
    int a,b,c;
    number num1;
    num1.display(a,b,c);
    return 0;
}

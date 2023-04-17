#include<iostream>
using namespace std;
class number
{
    public:
    void display(int x,int y)
    {
        cout<<"enter two number: ";
        cin>>x>>y;
        if(x%y==0)
        {
            cout<<x<<" is a multiple of "<<y;
        }
        else
        {
            cout<<x<<" is not a multiple of "<<y;
        }
    }
};
int main()
{
    int a,b;
    number num1;
    num1.display(a,b);
    return 0;
}


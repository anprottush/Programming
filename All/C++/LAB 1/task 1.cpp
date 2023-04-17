#include<iostream>
using namespace std;
class number
{
    public:
     void display(int x)
    {
        cout<<"enter number: ";
        cin>>x;
        if(x%2==0)
        {
            cout<<"even number";
        }
        else
        {
            cout<<"odd number";
        }
    }
};
int main()
{
    int y;
    number num1;
    num1.display(y);
    return 0;
}

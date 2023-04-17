#include<iostream>
using namespace std;
class number
{
private:
    int a;
    public:
    void display(int x)
    {
        x=a;
        cout<<"enter number: ";
        cin>>a;
        if(a%2==0)
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

#include<iostream>
using namespace std;
int count=0;
class alpha
{
public:
    alpha()
    {
        count++;
        cout<<endl<<"No.of object created: "<<count;
    }
    ~alpha()
    {
        cout<<endl<<"No.of object destroyed: "<<count;
        count--;
    }
};
int main()
{
    cout<<"enter main: "<<endl;
    alpha A1,A2,A3,A4;
    {
        cout<<endl<<endl<<"enter block 1: "<<endl;
        alpha A5;
    }
    {
        cout<<endl<<endl<<"enter block 2: "<<endl;
        alpha A6;
    }
    cout<<endl<<endl<<"Re-enter main: "<<endl;
    return 0;
}


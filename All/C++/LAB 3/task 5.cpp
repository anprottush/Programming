#include<iostream>
using namespace std;
class employee
{
private:
    int h,p,r;
public:
    void input()
    {
        for( ; ; )
        {
            cout<<"enter hours worked(-1 to end): ";
            cin>>h;
            if(h==-1)
            {
                break;
            }
            else
            {
                cout<<"enter hourly rate of the employee($00.00): ";
                cin>>r;
                if(h>=0&&h<=40)
                    p=h*r;
                if(h>40)
                {
                    float p=40.0*r+(h-40.0)*r*1.5;
                }
            }
            cout<<"salary is: $"<<p<<endl;
        }
    }
};
int main()
{
    employee e;
    e.input();
    return 0;
}

#include<iostream>
using namespace std;
class number
{
    int i,sum;
    float avg;
public:
    void input()
    {
        sum=0;
        cout<<"enter integers(9999 to end): "<<endl;
        for(i=1; ;i++)
        {
            cin>>i;
            if(i==9999)
            {
                break;
            }
            sum=sum+i;
        }
        avg=sum/5;
    }
    void result()
    {
        cout<<"average is: "<<avg;
    }
};
int main()
{
    number n1;
    n1.input();
    n1.result();
    return 0;
}

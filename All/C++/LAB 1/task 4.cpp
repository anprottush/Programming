#include<iostream>
using namespace std;
class number
{
private:
     int i,count;
public:
    void prime(int x)
    {

        count=0;
        cout<<"enter number: ";
        cin>>x;
        for(i=1;i<=x;i++)
        {
           if(x%i==0)
           {
               count++;
           }
        }
        if(count==2)
        {
            cout<<x<<" is a prime number";
        }
        else
        {
            cout<<x<<" is not a prime number";
        }
    }
};
int main()
{
    int y;
    number num1;
    num1.prime(y);
    return 0;
}

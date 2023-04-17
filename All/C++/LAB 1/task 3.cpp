#include<iostream>
using namespace std;
class number
{
private:
    int a[100],i,s,sum,ave,pro,maximum,minimum;
public:
    void display()
    {
       sum=0;
       pro=1;
       cout<<"enter size: ";
       cin>>s;
       cout<<"enter 5 number: ";
       for(i=0;i<s;i++)
        {
          cin>>a[i];
          sum=sum+a[i];
          pro=pro*a[i];
        }
        ave=sum/s;
        cout<<"sum: "<<sum<<endl<<"average: "<<ave<<endl<<"product: "<<pro;
        maximum=a[0];
        minimum=a[0];
        for(i=0;i<s;i++)
        {
        if(a[i]>maximum)
          {
              maximum=a[i];
          }
          else if(a[i]<minimum)
          {
              minimum=a[i];
          }
        cout<<endl<<"maximum: "<<maximum<<endl<<"minimum: "<<minimum;
        }
    }
};
int main()
{
    number num1;
    num1.display();
    return 0;
}

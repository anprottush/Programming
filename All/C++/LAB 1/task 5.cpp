#include <iostream>
using namespace std;
class number
{
private:
    int x,i;
public:
    void display()
    {

        cout<<"enter number: ";
        cin>>x;
        cout<<"Enter elements: ";
        for(i=1;i<=x;i++)
        {
            cin>>i;
        }
        for(i=1;i<=x;i++)
        {
           cout<<" "<<i;
        }
        cout<<endl<<"Reverse Number: "<<endl;
        for(i=x;i>=1;i--)
        {
           cout<<" "<<i;
        }


    }
};
int main()
{
    number num1;
    num1.display();
    return 0;
}

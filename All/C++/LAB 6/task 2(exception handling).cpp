#include<iostream>
using namespace std;
void divide(double x,double y)
{
    cout<<"Enter 2 numbers :"<<x<<" "<<y<<endl;
    try
    {
        if(y==0)
          {
             throw y;
          }
        else
          {
            cout<<"a/b ="<<x/y<<endl<<endl;
          }
    }
    catch(double)
    {

        cout<<"Exception : Division by zero."<<endl<<endl;
    }
    catch(double)
    {
        cout<<"Exception :Division is less than 1"<<endl<<endl;
    }
}

int main()
{


        divide(8,5);
        divide(9,0);
        divide(-1,10);

}

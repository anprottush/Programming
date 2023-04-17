#include<iostream>
using namespace std;

class div
{
public:
    void divide(double a,double b)
    {
        double x=a/b;
        try{
         if(b==0){
            throw b;
         }
         if(a/b<1)
         {
             throw 1;
         }
         else{
            cout<<"a/b :"<<a/b<<endl;
         }
         }
         catch(double)
         {
              cout<<"Exception : Division by zero."<<endl<<endl;
        throw;
         }
         catch(int)
         {
              cout<<"Exception :Division is less than 1"<<endl<<endl;
         }
    }
};

int main()
{
    div d1;
    double x,y;
    cout<<"Enter 2 numbers :";
    cin>>x>>y;
    d1.divide(x,y);
}


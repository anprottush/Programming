#include<iostream>
using std::cin;
using std::cout;
using std::endl;
void divide(int x,int y,int z)
{
   cout<<"inside function: "<<endl;
   if((x-y)!=0)
   {
       int r=z/(x-y);
       cout<<"result= "<<r<<endl;
   }
   else
   {
       throw(x-y);
   }
}
int main()
{
    try
    {
        cout<<"inside try block: "<<endl;
        divide(10,20,30);
        divide(10,10,20);
    }
    catch(int a)
    {
        cout<<"catch exception= "<<a;
    }
    return 0;
}

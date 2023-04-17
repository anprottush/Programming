#include <iostream>
using namespace std;
class ABC
{
    public:
        ABC ()
       {
 	    cout << "Hey look I am in constructor" << endl;
       }
       ~ABC()
       {

             cout << "Hey look I am in destructor" << endl;
       }
       void A()
       {
           cout << "function main is terminating...." << endl;
       }


};

int main()
{
     ABC a;
      a.A();
     return 0;
}

#include<bits/stdc++.h>
using namespace std;
class a
{
public:
     virtual int fun()
{

}


};
class b:public a
{
public:
    int fun()
    {
        cout<<"c++"<<endl;
    }
};
int main()
{
    a *bb;
    b cc;
    bb =&cc;
    bb->fun();
}

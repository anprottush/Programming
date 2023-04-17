#include<bits/stdc++.h>
using namespace std;
class a
{
public:
    virtual int star()
    {

    }
};
class b:public a
{
public:
    int star()
    {
        cout<<"name"<<endl<<"id"<<endl;
    }
};
class c:public a
{
public:
    int star()
    {
        cout<<"6";
        cout<<"5";
    }
};
int main()
{
    a  *a1;
    b b2;
    c c1;
    a1=&b2;
    a1->star();
    a1=&c1;
    a1->star();

}

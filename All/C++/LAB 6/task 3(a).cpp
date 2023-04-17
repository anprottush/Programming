#include<iostream>
using namespace std;
class liquid
{
public:
    void add()
    {
        cout<<"add something "<<endl;
    }
    liquid Remove()
    {
        cout<<"remove something "<<endl;
    }
    liquid removeall()
    {
        cout<<"remove all "<<endl;
    }
};
class coffee:public liquid
{
public:
   virtual void add()
   {
      cout<<"add coffee "<<endl;
   }
   virtual liquid Remove()
   {
       cout<<"remove coffee "<<endl;
   }
   virtual liquid removeall()
   {
       cout<<"remove all coffee "<<endl;
   }
};
class milk:public liquid
{
public:
    void add()
    {
        cout<<"add milk "<<endl;
    }
    liquid Remove()
    {
        cout<<"remove milk "<<endl;
    }
    liquid removeall()
    {
        cout<<"remove all milk "<<endl;
    }
};
int main()
{
    coffee c;
    milk m;
    liquid l;
    liquid *a=&c;
    liquid *b=&m;
    liquid *d=&l;
    d->add();
    d->Remove();
    d->removeall();
    cout<<endl;
    a->add();
    a->Remove();
    a->removeall();
    cout<<endl;
    b->add();
    b->Remove();
    b->removeall();
    return 0;
}

#include<iostream>
using namespace std;
class liquid
{
public:
    virtual void add()=0;
    virtual void Remove()=0;
    virtual void removeall()=0;
};
class coffee:public liquid
{
public:
   void add()
   {
      cout<<"add coffee "<<endl;
   }
   void Remove()
   {
       cout<<"remove coffee "<<endl;
   }
   void removeall()
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
    void Remove()
    {
        cout<<"remove milk "<<endl;
    }
    void removeall()
    {
        cout<<"remove all milk "<<endl;
    }
};
int main()
{
    liquid *a=new coffee;
    liquid *b=new milk;
    a->add();
    a->Remove();
    a->removeall();
    cout<<endl;
    b->add();
    b->Remove();
    b->removeall();
    delete a;
    delete b;
}

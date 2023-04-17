#include<iostream>
using namespace std;
class liquid{
public:
    virtual void add()=0;
     virtual void Remove()=0;
     virtual  void removeall()=0;

};

class coffee: public liquid{
public:
  void add(){
    cout<<"add coffee  "<<endl;
    }
        void Remove(){
    cout<<"remove coffee "<<endl;
    }
       void removeall(){
    cout<<"remove all coffee "<<endl;
    }

};
class milk: public liquid{
public:
 void add(){
    cout<<"add milk  "<<endl;
    }
        void Remove(){
    cout<<"remove milk "<<endl;
    }
       void removeall(){
    cout<<"remove all milk "<<endl;
    }

};
int main()
{

    liquid *liquid[2];

    liquid[0]=new coffee;
    liquid[1]=new milk;

    liquid[0]->add();
    liquid[0]->Remove();
    liquid[0]->removeall();
    cout<<endl;
    liquid[1]->add();
    liquid[1]->Remove();
    liquid[1]->removeall();
    delete liquid[0];
    delete liquid[1];
}



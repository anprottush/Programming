#include<iostream>
using namespace std;
class liquid
{
public:
    virtual void add(){
    cout<<"add something "<<endl;
    }
     virtual liquid Remove(){
    cout<<"remove something "<<endl;
    }
     virtual  liquid removeall(){
    cout<<"remove all  "<<endl;
    }
};
class coffee: public liquid
{
public:
  void add(){
    cout<<"add coffee  "<<endl;
    }
        liquid Remove(){
    cout<<"remove coffee "<<endl;
    }
       liquid removeall(){
    cout<<"remove all coffee "<<endl;
    }
};
class milk: public liquid
{
public:
 void add(){
    cout<<"add milk  "<<endl;
    }
        liquid Remove(){
    cout<<"remove milk "<<endl;
    }
};
int main(){

    liquid *liquid[2];
    coffee coffee1;
    milk milk1;
    liquid[0]=&coffee1;
    liquid[1]=&milk1;
    liquid[0]->add();
    liquid[0]->Remove();
    liquid[0]->removeall();
    cout<<endl;
    liquid[1]->add();
    liquid[1]->Remove();
    liquid[1]->removeall();
}


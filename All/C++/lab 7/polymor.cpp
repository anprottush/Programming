#include<iostream>
using namespace std;
class liquid{
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

class coffee: public liquid{
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
class milk: public liquid{
public:
 void add(){
    cout<<"add milk  "<<endl;
    }
        liquid Remove(){
    cout<<"remove milk "<<endl;
    }
       liquid removeall(){
    cout<<"remove all milk "<<endl;
    }

};
int main(){

    liquid *liquid;
    coffee coffee1;
    milk milk1;
    liquid=&coffee1;
    liquid=&milk1;

    liquid->add();
    liquid->Remove();
    liquid->removeall();
    cout<<endl;
    liquid->add();
    liquid->Remove();
    liquid->removeall();
}

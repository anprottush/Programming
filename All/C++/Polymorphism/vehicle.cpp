#include<iostream>
using namespace std;
class vehicle
{
protected:
    string vName,vColor;
    int	noOfWheels,engineSize;
public:
    void setVname(string n)
    {
        vName=n;
    }
    void setVcolor(string c)
    {
        vColor=c;
    }
     void setWheels(int w)
     {
         noOfWheels=w;
     }
     void setEngine(int e)
     {
         engineSize=e;
     }
};
class Bus:public vehicle
{
public:
    void displayBus()
    {
        cout<<vName<<" "<<"has"<<" "<<noOfWheels<<" "<<"wheels"<<endl;
        cout<<vName<<" ""has"" "<<engineSize<<" ""CC"<< " ""engine"<<endl;
    }
};
class Car:public vehicle
{
public:
    void displayCar()
    {
       cout<<vName<<" ""has"" "<<noOfWheels<<" ""wheels"<<endl;
        cout<<vName<<" ""has"" "<<engineSize<<" ""CC"<< " ""engine"<<endl;
    }
};
class Bike:public vehicle
{
public:
    void displayBike()
    {
        cout<<vName<<" ""has"" "<<noOfWheels<<" ""wheels"<<endl;
        cout<<vName<<" ""has"" "<<engineSize<<" ""CC"<< " ""engine"<<endl;
    }
};
int main()
{
    Bus b1;
    Car c1;
    Bike b2;
    b1.setVname("Double-Decker");
    b1.setWheels(6);
    b1.setEngine(2500);
    b1.displayBus();
    c1.setVname("BMW");
    c1.setWheels(4);
    c1.setEngine(1500);
    c1.displayCar();
    b2.setVname("Yamaha");
    b2.setWheels(2);
    b2.setEngine(1000);
    b2.displayBike();
}

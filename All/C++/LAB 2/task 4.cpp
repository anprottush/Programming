#include<iostream>
using namespace std;
class cost
{
private:
    int mile, gallon, tmile, tgallon;
    float MPG, TMPG;
public:
    void input()
    {
        cout<<"Enter miles driven (-1 to quit):";
        cin>>mile;
        tmile=0;
        tgallon=0;
        while(mile!=-1)
        {
            cout<<"Enter gallon Used: ";
            cin>>gallon;
            MPG = mile/(float)gallon;
            tmile = tmile + mile;
            tgallon = tgallon + gallon;
            cout<<"MPG this tankful: "<<MPG<<endl;
            TMPG = tmile / (float)tgallon;
            cout<<"Total MPG: "<<TMPG<<endl;
            cout<<"Enter miles driven (-1 to quit):";
            cin>>mile;
        }

    }
};
int main()
{
    cost c;
    c.input();
    return 0;
}










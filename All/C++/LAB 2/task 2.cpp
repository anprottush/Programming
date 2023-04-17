#include<iostream>
using namespace std;
class date
{
    private:
    int month,day,year;
public:
    date setfun(int a,int b,int c)
    {
        month=a;
        day=b;
        year=c;
    }
    int getmonth()
    {
        return month;
    }int getday()
    {
        return day;
    }int getyear()
    {
        return year;
    }
    void display()
    {
        if(month<=1 &&month<=12)
        {
            month=1;
             cout<<"Original date: "<<endl<<month<<'/'<<day<<'/'<<year<<endl;
        cout<<endl<<"New date: "<<endl<<"1/1/2005"<<endl;
        }


    }
};
int main()
{
    date da;
    int m,d,y;
    cout<<"Month: ";
    cin>>m;
    cout<<"Day: ";
    cin>>d;
    cout<<"Year: ";
    cin>>y;
    cout<<endl;
    da.setfun(m,d,y);
    da.display();
    return 0;
}

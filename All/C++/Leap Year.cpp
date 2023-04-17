#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    printf("enter year: ");
    cin>>year;
    if(year%400==0)
    {
        cout<<"leap year";
    }
    else if(year%100==1)
    {
        printf("not leap year: ");
    }
    else if(year%4==0)
    {
        cout<<"leap year";
    }
    else
    {
        printf("not leap year: ");
    }

}

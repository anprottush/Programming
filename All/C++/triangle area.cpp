#include<iostream>
#include<math.h>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    float a,b,c,s,area;
    cout<<"enter three number: ";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area: "<<area<<endl;
    return 0;
}

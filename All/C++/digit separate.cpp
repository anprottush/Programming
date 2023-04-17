#include<iostream>
using namespace std;
int main()
{
 int number ,a[5] , x ,j;
 cout<<"Enter 5 digit number :  ";
 cin>>number;

 for(int i = 0;i <5;i++)
 {

  x = number % 10;
  a[i] = x;
  number  = number / 10;
 }

 cout<<"Digits are :  ";

 cout<<a[0]<<","<<a[1]<<","<<a[2]<<","<<a[3]<<","<<a[4];
 cout<<endl;
 cout<<"\n\n or using for loop : ";
 for(int i=0 ;i<5;i++)
 {

  cout<<a[i]<<" : ";

 }
 return 0;
}

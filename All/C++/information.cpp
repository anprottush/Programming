#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char n[100],n1[100];
    string id;
    int semister,phone_no;
    float cgpa;
    cout<<"enter name: ";
    cin>>n>>n1;
    strcat(n," ");
    strcat(n,n1);
    cout<<"enter id: ";
    cin>>id;
    cout<<"enter semister: ";
    cin>>semister;
    cout<<"enter cgpa: ";
    cin>>cgpa;
    cout<<"enter phone no: ";
    cin>>phone_no;
    cout<<"enter information: "<<endl;
    cout<<n<<endl<<id<<endl<<semister<<endl<<cgpa<<endl<<phone_no;
    return 0;
}

#include<iostream>
using namespace std;
void printreverse(int a[100],int c)
{
    int i;
    cout<<"Enter Array: \n";
    for(i=0; i<c; i++)
    {
        cin>>a[i];
    }
    cout<<"Reverse Array: \n";
    for(i=4; i>=0; i--)
    {
        cout<<a[i]<<" ";

    }

}
void swaparray(int a[100],int b[100],int c)
{
    int i,temp[c];
    cout<<"Enter 1st Array: \n";
    for(i=0; i<c; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter 2nd Array: \n";
    for(i=0; i<c; i++)
    {
        cin>>b[i];
    }
    cout<<"Before Swapping Array \n\n";
    cout<<"A array: ";
    for(i=0; i<c; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nB array: ";
    for(i=0; i<c; i++)
    {
        cout<<b[i]<<" ";
    }
    for(i=0; i<c; i++)
    {
        temp[i]=a[i];
        a[i]=b[i];
        b[i]=temp[i];
    }
    cout<<"\n\nAfter Swapping Array \n";
    cout<<"A array: ";
    for(i=0; i<c; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nB array: ";
    for(i=0; i<c; i++)
    {
        cout<<b[i]<<" ";
    }
     cout<<endl;

}
void initialization(int s)
{
    int a[s],b[s];
    cout<<"Reverse Function calling \n";
    printreverse(a,s);
    cout<<"\n\nSwap Function calling \n";
    swaparray(a,b,s);
}
int main()
{
    int s;
    cout<<"Enter Size of Array: ";
    cin>>s;
    initialization(s);
}

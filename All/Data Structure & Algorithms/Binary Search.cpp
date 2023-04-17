#include<iostream>
using namespace std;
int main()
{
    int size,search,i,j,l,r,m;
    cout<<"Enter Size: "<<endl;
    cin>>size;
    int a[size];
    cout<<"Enter elements: "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Search elements: "<<endl;
    cin>>search;
    l=1;
    r=size;
    while(l<=r&&a[m]!=search)
    {

        if(a[m]<search)
        {
            l=m+1;
        }
        else
        {
            r=m-1;

        }
        m=(l+r)/2;
    }
    if(a[m]==search)
    {
        cout<<"\nElement found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}

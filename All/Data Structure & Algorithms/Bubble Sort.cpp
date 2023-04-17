#include<iostream>
using namespace std;
int main()
{
    int size,i,j,t;
    cout<<"Enter Size: "<<endl;
    cin>>size;
    int a[size];
    cout<<"Enter elements: "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<size; i++)
    {
        for(j=0; j<size-1; j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"After Bubble Sort elements are: "<<endl;
    for(i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }

}

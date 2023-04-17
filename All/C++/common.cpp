#include<iostream>
using namespace std;
int main()
{
    int a[50], b[50], c[50], i, limitA, limitB, j, k=0, x, count=0;
    cout<<"How many element you want to store in array A: "<<endl;
    cin>>limitA;
    cout<<"How many element you want to store in array B: ";
    cin>>limitB;
    cout<<"Enter any %d array elements for array A: "<<limitA<<endl;
    for(i=0; i<limitA; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter any %d array elements for array B: "<<limitB<<endl;
    for(i=0; i<limitB; i++)
    {
        cin>>b[i];
    }
    for(i=0; i<limitA; i++)
    {
        for(j=0; j<limitB; j++)
        {
            if(a[i]==b[j])
            {
                count=0;
                for(x=0; x<k; x++)
                {
                    if(a[i]==c[x])
                        count++;
                }
                if(count==0)
                {
                    c[k]=a[i];
                    k++;
                }
            }
        }
    }
    cout<<"\nArray A:\n"<<endl;
    for(i=0; i<limitA; i++)
    {
        if(i==(limitA-1))
            cout<<a[i]<<" ";
        else
            cout<<a[i]<<" ";
    }
    cout<<"\n\nArray B:\n"<<endl;
    for(i=0; i<limitB; i++)
    {
        if(i==(limitB-1))
            cout<<b[i]<<" ";
        else
            cout<<b[i]<<" ";
    }
    cout<<"\n\nArray C:\n"<<endl;
    for(i=0; i<k; i++)
    {
        if(i==(k-1))
            cout<<c[i]<<" ";
        else
            cout<<c[i]<<" ";
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a[100],s,i,j;
    cout<<"enter size of array: ";
    cin>>s;
    cout<<"enter "<<s<<" elements of array: "<<endl;
    for(i=0;i<s;i++)
    {
        cin>>a[i];
    }
    //cout<<"prime number list: "<<endl;
    for(i=0;i<s;i++)
    {
       int c=0;
       for(j=2;j<a[i];j++)
          {
            if(a[i]%j==0)
            {
              c++;
              break;
           }
          }
          if(c==0)
    {
        cout<<"prime: "<<a[i]<<endl;
    }
    else
    {
        cout<<"not prime: "<<a[i]<<endl;
    }
    }


}

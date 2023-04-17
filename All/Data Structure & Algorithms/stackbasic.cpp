/*#include<iostream>
using namespace std;
int main()
{
    int top=-1,size,number;
    int s[size];
    cout<<"Enter size of stack: "<<endl;
    cin>>size;
    cout<<"Enter element to pop in the stack:";
    cin>>number;
    if(top==size)
    {
        cout<<"\nStack is full"<<endl;
    }
    else
    {

    }
}*/

#include<iostream>
using namespace std;
string encode(string st,int n)
{
    for(int i=2; i<=st.length(); i=i+3)
    {
        st[i]=st[i]+n;

    }
    cout<<"\nConverted String: "<<endl;
    for(int i=0; i<st.length(); i++)
    {
        cout<<st[i];
    }
    cout<<endl;
    return st;
}
int main()
{
    string s;
    int j;
    cout<<"Enter String: "<<endl;
    getline(cin,s);
    cout<<"\nEnter value "<<endl;
    cin>>j;
    encode(s,j);
    return 0;
}

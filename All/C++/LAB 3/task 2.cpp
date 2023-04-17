#include<iostream>
using namespace std;
class star
{
     int n,i,j,k,space;
public:
    void input()
    {
        cout<<"enter number: ";
        cin>>n;
        space=n-1;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=space;j++)
            {
                cout<<" ";
            }
            space--;
            for(k=1;k<=(2*i-1);k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        space=1;
        for(i=1;i<=(n-1);i++)
        {
             for(j=1;j<=space;j++)
             {
                 cout<<" ";
             }
             space++;
             for(k=1;k<=(2*(n-i)-1);k++)
             {
                 cout<<"*";
             }
             cout<<endl;
        }
    }
};
int main()
{
    star s1;
    s1.input();
    return 0;
}

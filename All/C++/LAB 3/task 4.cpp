#include<iostream>
using namespace std;
class star
{
    int n,i,j;
public:
     void input()
    {
        cout<<"enter length of side: ";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(j==1||j==n||i==1||i==n)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
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

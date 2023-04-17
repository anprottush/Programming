#include<iostream>
using namespace std;
class round
{
    int n,k,i,c;
    int a[100];
public:
    void input()
    {
        c=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>0 && a[i]>=a[k-1])
            {
                c++;
            }
        }
    }
    void output()
    {
        cout<<c;
    }
};
int main()
{
    round r;
    r.input();
    r.output();
    return 0;
}

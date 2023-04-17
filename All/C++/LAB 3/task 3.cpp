#include<iostream>
using namespace std;
class factorial
{
private:
    int n;
    float e;
public:
    factorial()
    {
        n=0;
        e=1.0;
    }
    int fact(int a)
    {
        int i,fact=1;
        for(i=1;i<=a;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
    void input()
    {
        cout<<"Enter number of Order = ";
        cin>>n;
    }
    void eff()
    {
        for(int i=1;i<=n;i++)
        {
            e=e+1/(float)fact(i);
        }
    }
    void show()
    {
        cout<<"Answer = "<<e;
    }

};

int main()
{
    factorial f;
    f.input();
    f.eff();
    f.show();
    return 0;
}

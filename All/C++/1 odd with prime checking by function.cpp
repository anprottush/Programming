#include<iostream>
using namespace std;
int evenodd(int a)
{
    if(a%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }

}
void prime(int b)
{
    int c=0,i;
    for(i=2; i<b; i++)
    {
        if(b%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        cout<<"prime"<<endl;
    }


    else
    {
        cout<<"not prime";
    }
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int number=evenodd(n);
    if(number==0)
    {
        cout<<"number is even"<<endl;
    }
    else
    {
        cout<<"number is odd"<<endl;
    }

    prime(n);

    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char o;
    cout<<"enter two number: ";
    cin>>a>>b;
    cout<<"enter oparator: ";
    cin>>o;
    switch(o)
    {
    case '+':

        cout<<"Sum: "<<a+b<<endl;
        break;
    case '-':
        cout<<"Sub: "<<a-b<<endl;
        break;
    case '*':

        cout<<"Mul: "<<a*b<<endl;
        break;
    case '/':
        cout<<"Div: "<<a/b<<endl;
        break;
    default:
        cout<<"Error! operator is not correct"<<endl;
        break;
    }
    return 0;
}

#include<iostream>
#include<string.h>
#define size 50
//2*4+(6-3)/3
using namespace std;
char stack[size];
int tos=0,ele;
void push(int ele)
{
    stack[tos]=ele;
    tos++;
}
char pop()
{
    tos--;
    return(stack[tos]);
}
string infix;
char output[30];
int prec(char symbol)
{
    if(symbol== '(')
        return 0;
    if(symbol== ')')
        return 0;
    if(symbol=='+' || symbol=='-')
        return 1;
    if(symbol=='*' || symbol=='/')
        return 2;
    if(symbol=='^')
        return 3;
    return 0;
}
int main()
{
    int i=0,j=0;
    char temp;
    cout<<"Enter an infix expression: "<<endl;
    cin>>infix;
    for(i=0; i<infix.length(); i++)
    {
        if(infix[i]!='+' && infix[i]!='-' && infix[i]!='*' && infix[i]!='/' && infix[i]!='^' && infix[i]!=')' && infix[i]!='(' )
        {
            output[j++]=infix[i];
        }
        else
        {
            if(tos==0)
            {
                push(infix[i]);
            }
            else
            {
                if(infix[i]!=')' && infix[i]!='(')
                {
                    if(prec(infix[i]) <= prec(stack[tos-1]))
                    {
                        temp=pop();
                        output[j++]=temp;
                        push(infix[i]);
                    }
                    else
                    {
                        push(infix[i]);
                    }
                }
                else
                {
                    if(infix[i]=='(')
                    {
                        push(infix[i]);
                    }
                    if(infix[i]==')')
                    {
                        temp=pop();
                        while(temp!='(')
                        {
                            output[j++]=temp;
                            temp=pop();
                        }
                    }
                }
            }
        }
    }
    while(tos!=0)
    {
        output[j++]=pop();
    }
    cout<<"\nThe Postfix expression is: \n"<<output<<endl;

}




#include<iostream>
using namespace std;
#define size 5
struct stack
{
    int s[size];
    int top;
} st;
int stackfull()
{
    if(st.top>=size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int stackempty()
{
    if(st.top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
void push(int n)
{
    st.top++;
    st.s[st.top]=n;
}
int pop()
{
    int no;
    no=st.s[st.top];
    st.top--;

    return (no);
}
void display()
{
    int i;
    if(stackempty())
    {
        cout<<"\nStack Is Empty cannot Pop Element Into Stack "<<endl;
    }
    else
    {
        cout<<"\nElements of Stack: "<<endl;
        for(i=st.top; i>0; i--)
        {
            cout<<" "<<st.s[i];
        }
        cout<<endl;
    }

}
void seeoperation()
{
    st.top==-1;
    int option,number;
    do
    {
        cout<<"*****Stack Operation*****"<<endl;
        cout<<"1. Push Element Into Stack"<<endl;
        cout<<"2. Pop Element Into Stack"<<endl;
        cout<<"3. Display Element Into Stack"<<endl;
        cout<<"4. Exit Programm"<<endl;

        cout<<"\nEnter Choose Option: "<<endl;
        cin>>option;
        switch(option)

        {



        case 1:


            cout<<"\nEnter the number to be pushed: "<<endl;
            cin>>number;
            if(stackfull())
            {
                cout<<"\nStack Is Full Cannot Push Element into Stack"<<endl;
            }
            else
            {
                push(number);
                cout<<endl;
            }
            break;
        case 2:

            if(stackempty())
            {
                cout<<"\nStack Is Empty cannot Pop Element Into Stack"<<endl;
            }
            else
            {
                number=pop();
                cout<<"\nThe Popped Elements Are: "<<number<<endl;
            }
            break;

        case 3:

            display();
            break;
        case 4:
            cout<<"End of Program "<<endl;
            break;
        }

    }
    while(option!=4);
}


int main()
{
    seeoperation();
}

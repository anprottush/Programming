#include<iostream>
using namespace std;
#define size 5
struct queue
{
    int q[size];
    int front,rear;
} qu;
int queuefull()
{
    if(qu.rear>=size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int queueempty()
{
    if((qu.front==-1) || (qu.front>qu.rear ))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int enqueue(int n)
{
    if(qu.front==-1)

        qu.front++;
        qu.q[++qu.rear]=n;

    return qu.rear;
}
int dequeue()
{
    int no;
    no=qu.q[qu.front];
    qu.front++;
    cout<<"\nThe Dequeue Elements Are: "<<no<<endl;
    return qu.front;
}
void display()
{
    int i;
    cout<<"\nElements of Stack: "<<endl;
        for(i=qu.front; i<=qu.rear; i++)
        {
            cout<<" "<<qu.q[i];
        }
        cout<<endl;
    }


void seeoperation()
{
    qu.front==-1;
    qu.rear=-1;
    int option,number;
    do
    {
        cout<<"*****Queue Operation*****"<<endl;
        cout<<"1. Enqueue Element Into Queue"<<endl;
        cout<<"2. Dequeue Element Into Queue"<<endl;
        cout<<"3. Display Element Into Queue"<<endl;
        cout<<"4. Exit Programm"<<endl;

        cout<<"\nEnter Choose Option: "<<endl;
        cin>>option;
        switch(option)

        {



        case 1:


            cout<<"\nEnter the number to be pushed: "<<endl;
            cin>>number;
            if(queuefull())
            {
                cout<<"\nQueue Is Full Cannot Enqueue Element Into Queue"<<endl;
            }
            else
            {
                enqueue(number);
                cout<<endl;
            }
            break;
        case 2:

            if(queueempty())
            {
                cout<<"\nQueue Is Empty cannot Dequeue Element Into Queue"<<endl;
            }
            else
            {
                dequeue();
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


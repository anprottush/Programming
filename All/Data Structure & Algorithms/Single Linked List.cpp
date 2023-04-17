#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*start;
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    start=new(struct node);
    if(start == NULL)
    {
        cout<<"\nList is empty";

    }
    else
    {
        cout<<"\nEnter the data of node 1: ";
        cin>>data;
        start->data = data;
        start->next = NULL;
        temp = start;
        for(i=2; i<=n; i++)
        {
            newNode = new(struct node);
            if(newNode == NULL)
            {
                cout<<"\nList is empty";
                break;
            }

            cout<<"Enter the data of node "<<i<<": ";
            cin>>data;

            newNode->data = data;
            newNode->next = NULL;

            temp->next = newNode;
            temp = temp->next;

        }

        cout<<"\n\nThe List is create successfully\n";
    }
}
void inserthead(int num)
{
    struct node *temp;

    temp=new(struct node);
    temp->data = num;
    if(start == NULL)
    {
        start=temp;
        start->next = NULL;
    }
    else
    {
        temp->next=start;
        start=temp;
    }

}
void inserttail(int num)
{
    struct node *temp,*right;

    temp=new(struct node);
    temp->data = num;
    right=(struct node*)start;
    while(right->next!=NULL)
    {
        right=right->next;
        right->next=temp;
        right=temp;
        right->next=NULL;
    }
}
void insertspecificposition(int num,int pos)
{
    struct node  *temp,*left,*right;
    int i,counter=0;

    right=start;
    if(pos<=1)
    {
        inserthead(num);
    }
    else
    {
        for(i=1; i<pos; i++)
        {
            left=right;
            right=right->next;
            if(right==NULL)
            {
                inserttail(num);
            }
        }
        temp=new(struct node);
        temp->data=num;
        temp->next=left->next;
        left->next=temp;
    }
}
void searchitem(int Search)
{
    int index,flag;
    struct node *curNode;

    index = 0;
    flag=0;
    curNode = start;
    if(curNode==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        while (curNode != NULL)
        {
            index++;
            if(curNode->data==Search)
            {
                flag=1;
                cout<<Search<<" found in the list at "<<index<<" position\n";

            }
            curNode = curNode->next;
        }

        if(flag==0)
        {
            cout<<Search<<" not found in the list \n";
        }
    }
}
void deleteitembeginning()
{
    struct node *temp;
    if(start==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        temp=start;
        start=start->next;
        cout<<"The Delete Number is: "<<temp->data;
    }
}
void deleteitemlast()
{
    struct node *temp,*prev;
    if(start==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        temp=start;
        prev=start;
        while(temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp == start)
        {
            start = NULL;
        }
        else
        {
            prev->next = NULL;
            cout<<"The Delete Number is: "<<temp->data;
        }
    }
}
int deleteitemmiddle(int num)
{
    struct node *temp,*prev;
    temp=start;
    if(temp==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        while(temp!=NULL)
        {
            if(temp->data==num)
            {
                if(temp==start)
                {
                    start=temp->next;
                    free(temp);
                    return 1;
                }
                else
                {
                    prev->next=temp->next;
                    free(temp);
                    return 1;
                }
            }
            else
            {
                prev=temp;
                temp=temp->next;
            }
        }


    }
    return 0;

}
void display(struct node *t)
{

    if(start==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    t=start;
    cout<<"\nThe List Elements Are: \n"<<endl;
    while(t!= NULL)
    {
        cout<<t->data<<" ";
        t = t->next;
    }
    cout<<endl;
}
int main()
{
    int operation,nod;
    struct node *n;
    start=NULL;
    cout<<"\t\tLinked List Operation\n";
    while(1)
    {
        cout<<"\nSelect Operation\n\n";
        cout<<"1.Create a linked list by inserting node one by one at the end\n";
        cout<<"2.Insert a node at the head\n";
        cout<<"3.Insert a node at the tail\n";
        cout<<"4.Insert a new item at a specific position\n";
        cout<<"5.Search an item into linked list\n";
        cout<<"6.Delete an item from the list at beginning\n";
        cout<<"7.Delete an item from the list at last\n";
        cout<<"8.Delete an item from the list at middle\n";
        cout<<"9.Display the list\n";
        cout<<"10.Exit\n";
        cout<<"\nEnter Choice the Operation: ";
        cin>>operation;
        if(operation==1)
        {
            cout<<"\nEnter the total number of node: ";
            cin>>nod;
            createList(nod);
        }
        if(operation==2)
        {
            int num;
            cout<<"\nEnter the number to insert a node at the head: ";
            cin>>num;
            inserthead(num);
        }
        if(operation==3)
        {
            int num;
            cout<<"\nEnter the number to insert a node at the tail: ";
            cin>>num;
            inserttail(num);
        }
        if(operation==4)
        {
            int num,position;
            cout<<"\nEnter the number in a node: ";
            cin>>num;
            cout<<"\nEnter the position where insert number in a node: ";
            cin>>position;
            insertspecificposition(num,position);
        }
        if(operation==5)
        {

            int Search;
            cout<<"\nEnter element to search into linked list: \n";
            cin>>Search;
            searchitem(Search);
        }
        if(operation==6)
        {
            deleteitembeginning();
        }
        if(operation==7)
        {
            deleteitemlast();
        }
        if(operation==8)
        {
            int number;
            cout<<"\nEnter the number of middle node to delete: ";
            cin>>number;
            if(deleteitemmiddle(number))
            {
                cout<<number<<" deleted successfully\n";
            }
            else
            {
                cout<<number<<" not found in the list\n";
            }
        }
        if(operation==9)
        {
            display(n);
        }
        if(operation>=10)
        {
            exit(0);
        }

    }

    return 0;

}

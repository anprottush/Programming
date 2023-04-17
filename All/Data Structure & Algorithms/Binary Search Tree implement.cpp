#include<iostream>
using namespace std;

struct treeNode
{
    int data;
    treeNode *left;
    treeNode *right;
};
treeNode* FindMin(treeNode *node)
{
    if(node==NULL)
    {
        return NULL;
    }
    if(node->left)
        return FindMin(node->left);
    else
        return node;
}
treeNode* FindMax(treeNode *node)
{
    if(node==NULL)
    {

        return NULL;
    }
    if(node->right)
        return(FindMax(node->right));
    else
        return node;
}
treeNode *Insert(treeNode *node,int data)
{
    if(node==NULL)
    {
        treeNode *temp;
        temp=new treeNode;
        temp -> data = data;
        temp -> left = temp -> right = NULL;
        return temp;
    }
    if(data >(node->data))
    {
        node->right = Insert(node->right,data);
    }
    else if(data < (node->data))
    {
        node->left = Insert(node->left,data);
    }

    return node;
}
treeNode * Delet(treeNode *node, int data)
{
    treeNode *temp;
    if(node==NULL)
    {
        cout<<"Element Not Found \n\n";
    }
    else if(data < node->data)
    {
        node->left = Delet(node->left, data);
    }
    else if(data > node->data)
    {
        node->right = Delet(node->right, data);
    }
    else
    {

        if(node->right && node->left)
        {
            temp = FindMin(node->right);
            node -> data = temp->data;
            node -> right = Delet(node->right,temp->data);
        }
        else
        {
            temp = node;
            if(node->left == NULL)
                node = node->right;
            else if(node->right == NULL)
                node = node->left;
            free(temp);
        }
    }
    return node;
}
treeNode * Find(treeNode *node, int data)
{
    if(node==NULL)
    {

        return NULL;
    }
    if(data > node->data)
    {

        return Find(node->right,data);
    }
    else if(data < node->data)
    {

        return Find(node->left,data);
    }
    else
    {
        return node;
    }
}
void Inorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    Inorder(node->left);
    cout<<node->data<<" ";
    Inorder(node->right);
}
void Postorder(treeNode *node)
{

    if(node==NULL)
    {
        return;
    }

    Postorder(node->left);
    Postorder(node->right);
    cout<<node->data<<" ";
}
void Preorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    cout<<node->data<<" ";
    Preorder(node->left);
    Preorder(node->right);

}
int main()
{
    treeNode *root = NULL,*temp;
    int ch;
    while(1)
    {
        cout<<"\t\tImplement Binary Search Tree Operations\n";
        cout<<"\n1.Insert data one by one in binary search tree ";
        cout<<"\n2.Traverse the tree using inorder method ";
        cout<<"\n3.Traverse the tree using preorder method";
        cout<<"\n4.Traverse the tree using postorder method  ";
        cout<<"\n5.Search ";
        cout<<"\n6.Delete";
        cout<<"\n7.Exit\n";
        cout<<"Enter choose operation: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nEnter element to be insert: ";
            cin>>ch;
            root = Insert(root, ch);
            cout<<"\nElements in BST are: ";
            Inorder(root);
            cout<<"\n\n";
            break;
        case 2:
            cout<<"\nInorder Traversals is: ";
            Inorder(root);
            cout<<"\n\n";
            break;
        case 3:
            cout<<"\nPreorder Traversals is: ";
            Preorder(root);
            cout<<"\n\n";
            break;

        case 4:
            cout<<"\nPostorder Traversals is: ";
            Postorder(root);
            cout<<"\n\n";
            break;

        case 5:
            cout<<"\nEnter element to be searched: ";
            cin>>ch;
            temp = Find(root,ch);
            if(temp==NULL)
            {
                cout<<"\nElement is not found\n\n";
            }
            else
            {
                cout<<"\nElement "<<temp->data<<" is Found\n\n";
            }
            break;
        case 6:

            cout<<"\nEnter element to be deleted: ";
            cin>>ch;
            root = Delet(root,ch);
            cout<<"\nAfter deletion elements in BST are: ";
            Inorder(root);
            cout<<"\n\n";
            break;
        case 7:
            exit(0);
            break;
        default:
            cout<<"\nPlease enter correct option \n\n";
            break;
        }
    }
    return 0;
}

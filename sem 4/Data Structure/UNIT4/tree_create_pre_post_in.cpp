#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
};

node *tree=NULL;

node *insert(node *tree,int num)
{
    node *ptr,*nodeptr,*parentPtr;

    ptr=new node();
    ptr->data=num;

    if(tree==NULL)
    {
        tree=ptr;
        tree->left=NULL;
        tree->right=NULL;
    }
    else
    {
        parentPtr=NULL;
        nodeptr=tree;

        while(nodeptr!=NULL)
        {
            parentPtr=nodeptr;
            if(num<nodeptr->data)
            {
                nodeptr=nodeptr->left;
            }
            else
            {
                nodeptr=nodeptr->right;
            }
        }
        if(num<parentPtr->data)
        {
            parentPtr->left=ptr;
        }
        else
        {
            parentPtr->right=ptr;
        }
    }
    return tree;
}

void preOrder(node *tree)
{
    if(tree!=NULL)
    {
        cout<<tree->data<<endl;
        preOrder(tree->left);
        preOrder(tree->right);
    }
}

void postOrder(node *tree)
{
    if(tree!=NULL)
    {
        postOrder(tree->left);
        postOrder(tree->right);
        cout<<tree->data<<endl;
    }
}

void inOrder(node *tree)
{
    if(tree!=NULL)
    {
        inOrder(tree->left);
        cout<<tree->data<<endl;
        inOrder(tree->right);
    }
}

int main()
{
    int ch,num;

    do
    {
        cout<<"1.Create"<<endl;
        cout<<"2.Pre-order"<<endl;
        cout<<"3.Post-order"<<endl;
        cout<<"4.In-order"<<endl;

        cout<<"Enter your choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            cout<<"Enter the number : ";
            cin>>num;
            tree=insert(tree,num);
            break;

        case 2:
            preOrder(tree);
            break;

        case 3:
            postOrder(tree);
            break;

        case 4:
            inOrder(tree);
            break;
        
        case 5:
            cout<<"Exit";
            break;
        }
    } while (ch!=5);
    
}
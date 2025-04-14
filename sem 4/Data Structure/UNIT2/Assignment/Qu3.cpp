#include<iostream>

using namespace std;

class node
{
    public:
    int data;
    node *next;
};

node *start=NULL;
node *rear=NULL;

node *create(node *start)
{
    int num;

    node *new_node;

    cout<<"<---Enter -1 to end--->"<<endl;
    
    cout<<"Enter the data : ";
    cin>>num;

    while(num!=-1)
    {
        new_node=new node();

        new_node->data=num;

        if(start==NULL)
        {
            new_node->next=NULL;
            start=new_node;
            rear=new_node;
        }
        else
        {
            rear->next=new_node;
            new_node->next=NULL;
            rear=new_node;
        }
        cout<<"Enter the data : ";
        cin>>num;
    }
    return start;
}

node *insert_mid(node *start)
{
    node *ptr,*new_node,*preptr;

    int num,val;

    cout<<"Enter the data : ";
    cin>>num;//3

    cout<<"Enter the value after which the data hase to be inserted : ";
    cin>>val; // 2 

    new_node=new node();
    new_node->data=num;

    ptr=start;
    preptr=start;

    while(preptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    
    new_node->next=ptr;
    preptr->next=new_node;
    return start;
}


node *insert_beg(node *start)
{
    int num;
    node *new_node;
    cout<<"Enter the num : ";
    cin>>num;

    new_node=new node();
    new_node->data=num;

    new_node->next=start;
    start=new_node;
    return start;
}

node *insert_end(node *start)
{
    node *ptr,*new_node;

    int num;

    cout<<"Enter the num : ";
    cin>>num;

    new_node=new node();
    new_node->data=num;

    rear->next=new_node;
    new_node->next=NULL;
    rear=new_node;
    return start;
}

void display(node *start)
{
    node *ptr=start;

    if(start==NULL)
    {
        cout<<"EMPTY"<<endl;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            cout<<ptr->data<<"\t";
            ptr=ptr->next;
        }
        cout<<ptr->data;
    }
}

int main()
{
    int ch;

    do
    {
        cout<<"1.Create list"<<endl;
        cout<<"2.Insert a node in the middle"<<endl;
        cout<<"3.Insert a node in the beginning"<<endl;
        cout<<"4.Insert a node in the end"<<endl;
        cout<<"5.Display"<<endl;

        cout<<"Enter the choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            start=create(start);
            cout<<"<-------List Created------->"<<endl;
            break;
        
        case 2:
            start=insert_mid(start);
            cout<<"<-------Node insert at mid------->"<<endl;
            break;

        case 3:
            start=insert_beg(start);
            cout<<"<-------Node insert at beg------->"<<endl;
            break;
        
        case 4:
            start=insert_end(start);
            cout<<"<-------Node insert at end------->"<<endl;
            break;

        case 5:
            display(start);
            cout<<endl;
            cout<<"<-------List Display------->"<<endl;
            break;
        }
    } while (ch!=6);  
}

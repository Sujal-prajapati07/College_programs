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

    cout<<"Enter the num : ";
    cin>>num;

    while(num!=-1)
    {
        new_node=new node();

        new_node->data=num;

        if(start==NULL)
        {
            start=new_node;
            new_node->next=start;
            rear=new_node;
        }
        else
        {
            rear->next=new_node;
            new_node->next=start;
            rear=new_node;
        }
        cout<<"Enter the num : ";
        cin>>num; 
    }
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
    rear->next=new_node;
    start=new_node;
    return start;
}

node *insert_end(node *start)
{
    int num;

    node *new_node;

    cout<<"Enter the num : ";
    cin>>num;

    new_node=new node();
    new_node->data=num;
    new_node->next=start;
    rear->next=new_node;
    rear=new_node;
    return start;
}

node *insert_mid(node *start)
{
    int num,val;

    node *new_node,*ptr,*preptr;

    cout<<"Enter the num : ";
    cin>>num;

    cout<<"Enter the value which you want to insert after value:"<<endl;
    cin>>val;

    new_node=new node();
    new_node->data=num;

    ptr=start;
    preptr=ptr;
    while(preptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=new_node;
    new_node->next=ptr;
    return start;
}

void display(node *start)
{
    node *ptr=start;

    while(ptr->next!=start)
    {
        cout<<ptr->data<<"\t";
        ptr=ptr->next;
    }
    cout<<ptr->data;
}

int main()
{
    int ch;

    do
    {
        cout<<"1.Create list"<<endl;
        cout<<"2.Insert a node in the beginning"<<endl;
        cout<<"3.Insert a node in the ending"<<endl;
        cout<<"4.Insert a node in the middle"<<endl;
        cout<<"5.Display"<<endl;

        cout<<"Enter the choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            start=create(start);
            cout<<"<-----List created----->"<<endl;
            break;
        
        case 2:
            start=insert_beg(start);
            cout<<"<-----Node insert in the beginning----->"<<endl;
            break;
        
        case 3:
            start=insert_end(start);
            cout<<"<-----Node insert in the ending----->"<<endl;
            break;
        
        case 4:
            start=insert_mid(start);
            cout<<"<-----Node insert in the middle----->"<<endl;
            break;

        case 5:
            display(start);
            cout<<endl;
            break;
        }
    } while (ch!=6);
    
}

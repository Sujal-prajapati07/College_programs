//Write a CPP program to count the length of the Double Linkedlist.
#include<iostream>
using namespace std;
class node
{
    public:
    node *prev;
    int data;
    node *next;
};

node *start=NULL;
node *rear=NULL;

node *create(node *start)
{
    node *new_node;
    int num;
    cout<<"Enter -1 to end"<<endl;
    cout<<"Enter the vaue:"<<endl;
    cin>>num;

    while(num!=-1)
    {
        new_node=new node();
        new_node->data=num;

        if(start==NULL)
        {
            new_node->next=NULL;
            new_node->prev=NULL;
            start=new_node;
            rear=new_node;
        }
        else
        {
            rear->next=new_node;
            new_node->prev=rear;
            new_node->next=NULL;
            rear=new_node;
        }
        cout<<"Enter the value:"<<endl;
        cin>>num;
    }
    return start;
}

void *display(node *start)
{
    node *ptr=start;

    if(start==NULL)
    {
        cout<<"LINK LIST IS EMPTY"<<endl;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            cout<<ptr->data<<"\t";
            ptr=ptr->next;
        }
        cout<<ptr->data;
        cout<<"\n";
    }
}

node *length_count(node *start)
{
    node *ptr=start;
    int count=0;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        count++;
    }
    cout<<"LENGTH OF THE DOUBLE LINK LIST IS : "<<count<<endl;
}

int main()
{
    int ch;
    do
    {
        cout<<"1.CREATE"<<endl;
        cout<<"2.DISPLAY"<<endl;
        cout<<"3.LENGTH OF THE LINK LIST"<<endl;

        cout<<"Enter the choice:"<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
            start=create(start);
            break;
        
        case 2:
            display(start);
            break;

        case 3:
            start=length_count(start);
            break;
        }
    } while (ch!=4);
    return 0;
}
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
    cout<<"Enter -1 to end:"<<endl;
    cout<<"Enter the value:"<<endl;
    cin>>num;

    while(num!=-1)
    {
        new_node=new node();
        new_node->data=num;

        if(start==NULL)
        {
            new_node->next=start;
            new_node->prev=start;
            start=new_node;
            rear=new_node;
        }
        else
        {
            rear->next=new_node;
            new_node->prev=rear;
            new_node->next=start;
            start->prev=new_node;
            rear=new_node;
        }
        cout<<"Enter the number:"<<endl;
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
        while(ptr->next!=start)
        {
            cout<<ptr->data<<"\t";
            ptr=ptr->next;
        }
        cout<<ptr->data;
        cout<<"\n";
    }
    return start;
}

node *delete_beg(node *start)
{
    node *ptr=start;

    if(start==NULL)
    {
        cout<<"LINK LIST IS EMPTY"<<endl;
    }
    else
    {
        start=start->next;
        rear->next=start;
        start->prev=rear;
        free(ptr);
    }
}

int main()
{
    int ch;
    do{
        cout<<"1.CREATE"<<endl;
        cout<<"2.DISPLAY"<<endl;
        cout<<"3.DELETE AT BEGINING"<<endl;

        cout<<"Enter the choice:"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:
            start=create(start);
            break;

            case 2:
            display(start);
            break;

            case 3:
            start=delete_beg(start);
            break;
        }

    }while(ch!=4);

    return 0;
}
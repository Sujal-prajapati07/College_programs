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
    }
    cout<<"\n";
    return start;
}

node *insert_beg(node *start)
{
    node *new_node;
    int num;
    cout<<"Enter the value:"<<endl;
    cin>>num;
    new_node=new node();
    new_node->data=num;
    start->prev=new_node;
    new_node->next=start;
    start=new_node;
    return start;
}

node *insert_after(node *start)
{
    node *new_node,*ptr;
    int num,val;

    cout<<"Enter the number:"<<endl;
    cin>>num;

    cout<<"Enter value which you want after value:"<<endl;
    cin>>val;

    new_node=new node();
    new_node->data=num;
    ptr=start;
    while(ptr->data!=val)
    {
        ptr=ptr->next;
    }
    new_node->prev=ptr;
    new_node->next=ptr->next;
    ptr->next->prev=new_node;
    ptr->next=new_node;
    return start;
}
node *insert_end(node *start)
{
    node *new_node;
    int num;
    cout<<"Enter the value:"<<endl;
    cin>>num;

    new_node=new node();
    new_node->data=num;
    rear->next=new_node;
    new_node->prev=rear;
    new_node->next=NULL;
    rear=new_node;
    return start;
}

node *delete_beg(node *start)
{
    node *ptr=start;
    start=start->next;
    free(ptr);
    return start;
}

node *delete_after(node *start)
{
    node *ptr,*preptr;
    int val;
    cout<<"Enter the data which is delete to after at node:"<<endl;
    cin>>val;

    ptr=start;

    if(start==NULL)
    {
        cout<<"LINK LIST IS EMPTY"<<endl;
    }
    else
    {
        while(ptr->data!=val)
        {
            ptr=ptr->next;
        }
        preptr=ptr->prev;
        preptr->next=ptr->next;
        ptr->next->prev=preptr;
        free(ptr);
    }
    return start;
}

node *delete_end(node *start)
{
    rear->prev->next=NULL;
    node *ptr=rear;
    rear=rear->prev;
    free(ptr);
}

node *reverse_display(node *start)
{
    node *ptr=rear;

    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->prev;
    }
    return start;
}

int main()
{
    int ch;

    do
    {
        cout<<"1.CREATE"<<endl;
        cout<<"2.DISPLAY"<<endl;
        cout<<"3.INSERT AT BEGINING"<<endl;
        cout<<"4.INSERT AT AFTER"<<endl;
        cout<<"5.INSERT AT ENDING"<<endl;
        cout<<"6.DELETE AT BEGINING"<<endl;
        cout<<"7.DELETE AT AFTER"<<endl;
        cout<<"8.DELETE AT ENDING"<<endl;
        cout<<"9.DISPLAY REVERSE LIST"<<endl;

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
            start=insert_beg(start);
            break;

        case 4:
            start=insert_after(start);
            break;

        case 5:
            start=insert_end(start);
            break;

        case 6:
            start=delete_beg(start);
            break;

        case 7:
            start=delete_after(start);
            break;

        case 8:
            start=delete_end(start);
            break;

        case 9:
            start=reverse_display(start);
            break;
        }
    } while (ch!=10);
    return 0;
}
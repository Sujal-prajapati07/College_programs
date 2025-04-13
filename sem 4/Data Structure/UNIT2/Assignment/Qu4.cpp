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
        cout<<"Enter the num : ";
        cin>>num;
    }
    return start;
}

node *delete_mid(node *start)
{
    node *ptr,*preptr;

    int num;

    cout<<"Enter the value of the node after that node which you want delete : ";
    cin>>num;

    ptr=start;
    preptr=ptr;

    if(start==NULL)
    {
        cout<<"EMPTY"<<endl;
    }
    else
    {
        while(preptr->data!=num)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=ptr->next;
        free(ptr);
    }
    return start;
}

node *delete_beg(node *start)
{
    node *ptr=start;

    if(start==NULL)
    {
        cout<<"EMPTY"<<endl;
    }
    else
    {
        start=start->next;
        free(ptr);
    }
    return start;
}

node *delete_end(node *start)
{
    node *ptr,*preptr;

    ptr=start;

    if(start==NULL)
    {
        cout<<"EMPTY"<<endl;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=NULL;
        free(ptr);
    }
    return start;
}

node *display(node *start)
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
       cout<<"1.Create link list"<<endl;
       cout<<"2.Delete a particular node having value entered by value"<<endl;
       cout<<"3.Delete the first node"<<endl;
       cout<<"4.Delete the last node"<<endl;
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
        start=delete_mid(start);
        cout<<"<-----Delete middle node----->"<<endl;
        break;

       case 3:
        start=delete_beg(start);
        cout<<"<-----Delete first node----->"<<endl;
        break;

       case 4:
        start=delete_end(start);
        cout<<"<-----Delete last node----->"<<endl;
        break;

       case 5:
        display(start);
        cout<<endl;
        cout<<"<-----List Display----->"<<endl;
        break;

       }
    } while (ch!=6);
    
}
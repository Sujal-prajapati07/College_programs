#include<iostream>

using namespace std;

class node
{
    public:
    int data;
    node *prev;
    node *next;
};

node *start=NULL;
node *rear=NULL;

node *create(node *start)
{
    int num;

    node *new_node;

    cout<<"Enter the num : ";
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
            new_node->next=start;
            new_node->prev=rear;
            start->prev=new_node;
            rear=new_node;
        }
        cout<<"Enter the num : ";
        cin>>num;
    }
    return start;
}

node *delete_big(node *start)
{
    node *ptr=start;

    start=start->next;
    rear->next=start;
    start->prev=rear;
    free(ptr);
    return start;
}

node *delete_end(node *start)
{
    node *ptr=rear;

    rear=rear->prev;
    rear->next=start;
    start->prev=rear;
    free(ptr);
    return start;
}

node *delete_mid(node *start)
{
    int num,val;

    node *ptr,*preptr;

    cout<<"Enter the value which you want to delete after : ";
    cin>>val;

    ptr=start;
    preptr=ptr;
    while(ptr->data!=val)
    {
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    ptr->next->prev=preptr;
    free(ptr);
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
        cout<<"2.Delete a node in the beginning"<<endl;
        cout<<"3.Delete a node in the end"<<endl;
        cout<<"4.Delete a node in the middle"<<endl;
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
            start=delete_big(start);
            cout<<"<-----Node deleted at begining----->"<<endl;
            break;

        case 3:
            start=delete_end(start);
            cout<<"<-----Node deleted at ending----->"<<endl;
            break;
        
        case 4:
            start=delete_mid(start);
            cout<<"<-----Node deleted at middle----->"<<endl;
            break;

        case 5:
            display(start);
            cout<<endl;
            break;
        }
    } while (ch!=6);
}
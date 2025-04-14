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
            new_node->next=start;
            rear->next=new_node;
            rear=new_node;
        }
        cout<<"Enter the num : ";
        cin>>num;
    }
    return start;
}

node *delete_beg(node *start)
{
    node *ptr=start;

    start=start->next;
    rear->next=start;
    free(ptr);
    return start;
}

node *delete_end(node *start)
{
    node *ptr=start,*preptr;

    while(ptr->next!=start)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=start;
    free(ptr);
    return start;
}

node *delete_mid(node *start)
{
    int val;

    node *ptr,*preptr;

    cout<<"Enter the number which you want to delete:";
    cin>>val;

    ptr=start;
    preptr=ptr;

    while(ptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
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
        cout<<"3.Delete a node in the ending"<<endl;
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
            start=delete_beg(start);
            cout<<"<-----Node delete in the beginning----->"<<endl;
            break;
        
        case 3:
            start=delete_end(start);
            cout<<"<-----Node delete in the ending----->"<<endl;
            break;
        
        case 4:
            start=delete_mid(start);
            cout<<"<-----Node delete in the middle----->"<<endl;
            break;

        case 5:
            display(start);
            cout<<endl;
            break;
        }
    } while (ch!=6);
    
}
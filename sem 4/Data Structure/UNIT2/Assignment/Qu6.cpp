#include<iostream>

using namespace std;

class node
{
    public:
    int data;
    node *next;
    node *prev;
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
            new_node->prev=NULL;
            new_node->next=NULL;
            rear=new_node;
        }
        else
        {
            rear->next=new_node;
            new_node->prev=rear;
            new_node->next=NULL;
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
    free(ptr);
    start->prev=NULL;
    return start;
}

node *delete_end(node *start)
{
    rear->prev->next=NULL;
    node *ptr=rear;
    rear=rear->prev;
    free(ptr);
    return start;
}

node *delete_mid(node *start)
{
    node *ptr=start,*temp;

    int num;

    cout<<"Enter the node value which you want to delete : ";
    cin>>num;

    while(ptr->data!=num)
    {
        ptr=ptr->next;
    }
    temp=ptr->prev;
    temp->next=ptr->next;
    ptr->next->prev=temp;
    free(ptr);
    return start;
}

void display(node *start)
{
    node *ptr=start;

    while(ptr->next!=NULL)
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
        cout<<"2.Delete a node from the begining"<<endl;
        cout<<"3.Delete a node from the ending"<<endl;
        cout<<"4.Delete a node from the middle"<<endl;
        cout<<"5.Display"<<endl;

        cout<<"Enter the choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            start=create(start);
            cout<<"<------List created----->"<<endl;
            break;
        
        case 2:
            start=delete_beg(start);
            cout<<"<------Node deleted from begining----->"<<endl;
            break;

        case 3:
            start=delete_end(start);
            cout<<"<------Node deleted from ending----->"<<endl;
            break;
        
        case 4:
            start=delete_mid(start);
            cout<<"<------Node deleted from middle----->"<<endl;
            break;

        case 5:
            display(start);
            cout<<endl;
            break;
        }

    } while (ch!=6);
    
}
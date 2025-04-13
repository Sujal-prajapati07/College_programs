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

void display(node *start)
{
    node *ptr=start;

    int length=0;

    while(ptr!=NULL)
    {
        cout<<ptr->data<<"\t";
        length++;
        ptr=ptr->next;
    }
    cout<<endl;
    cout<<"Length of the list is : "<<length<<endl;
}

int main()
{
    int ch;

    do
    {
        cout<<"Create list"<<endl;
        cout<<"Display"<<endl;

        cout<<"Enter the choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            start=create(start);
            cout<<"<------List created----->"<<endl;
            break;

        case 2:
            display(start);
            cout<<endl;
            break;
        }
    } while (ch!=3);
    
}
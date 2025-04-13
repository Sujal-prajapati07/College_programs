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
    
    cout<<"---Enter -1 to end---"<<endl;

    cout<<"Enter the value : ";
    cin>>num;

    while(num!=-1)
    {
        new_node=new node;

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
        cout<<"Enter the value : ";
        cin>>num;
    }
    return start;
}

void display(node *start)
{
    node *ptr=start;

    if(start==NULL)
    {
        cout<<"Empty"<<endl;
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
    cout<<endl;
}

void remove(node *start) 
{
    node *new_node = start;

    while(new_node!=NULL) 
    {
        node *prev=new_node;
        node *nextNode=new_node->next;

        while(nextNode!=NULL) 
        {
            if (nextNode->data==new_node->data) 
            {
                prev->next=nextNode->next;
                nextNode=prev->next;
            }
            else 
            {
                prev=nextNode;
                nextNode=nextNode->next;
            }
        }
        new_node=new_node->next;
    }
}

int main()
{
    int ch;

    do
    {
        cout<<"1.CREATE LIST"<<endl;
        cout<<"2.DISPLAY"<<endl;
        cout<<"3.REMOVE DUPLICATE ELEMENT"<<endl;

        cout<<"Enter the choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            start=create(start);
            cout<<"<-------List Created------->"<<endl;
            break;

        case 2:
            display(start);
            cout<<"<-------List Display------->"<<endl;
            break;
        
        case 3:
            remove(start);
            cout<<"<-------Remove duplicate element------->"<<endl;
            break;
        }
    } while (ch!=4);  
}
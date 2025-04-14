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
    
    cout<<"Enter the no : ";
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

void check(node *start)
{
    node *ptr=start->next;

    while(ptr!=NULL && ptr!=start)
    {
        ptr=ptr->next;
    }

    if(ptr==start)
    {
        cout<<"Link list is circular"<<endl;
    }
    else
    {
        cout<<"Link list is not circular"<<endl;
    }
    cout<<endl;
}

int main()
{
    int ch;

    do
    {
        cout<<"1.Create list"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.check circular is not "<<endl;

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
            cout<<endl;
            cout<<"<-------List Display------->"<<endl;
            break;

        case 3:
            check(start);
            break;
        }
    } while (ch!=4);  
}

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
}

node *delete_after(node *start)
{
    node *ptr=start;
    node *preptr;
    int count=0,index;

    cout<<"Enter the index:"<<endl;
    cin>>index;

    while(ptr!=NULL)
    {
        if(count==index)
        {
            preptr->next=ptr->next;
            free(ptr);
            break;
        }
        preptr=ptr;
        ptr=ptr->next;
        count++;

    }
    return start;
}

int main()
{
    int ch;

    do
    {
       cout<<"1.CREATE LIST"<<endl;
       cout<<"2.DISPLAY"<<endl;
       cout<<"3.DELETE 3rd NODE"<<endl;

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
        cout<<"<-------List Display------>"<<endl;
        break;

       case 3:
        start=delete_after(start);
        cout<<"<-------Node deleted------>"<<endl;
        break;
       }
    } while (ch!=4);
    
}
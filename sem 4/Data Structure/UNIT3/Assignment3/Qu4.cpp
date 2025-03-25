#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};

node *front;
node *rear;

void insert()
{
    node *ptr;
    int num;

    cout<<"Enter the value : "<<endl;
    cin>>num;

    ptr=new node();
    ptr->data=num;

    if(front==NULL)
    {
        front=ptr;
        rear=ptr;
        ptr->next=NULL;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
        ptr->next=NULL;
    }
}

void deleteNode()
{
    node *ptr;

    if(front==NULL)
    {
        cout<<"UNDERFLOW"<<endl;
        return;
    }
    else
    {
        ptr=front;
        front=front->next;
        cout<<"Value being deleted is : "<<ptr->data<<endl;
        free(ptr);
    }
}

void display()
{
    node *ptr;
    ptr=front;

    if(front==NULL)
    {
        cout<<"Empty Queue"<<endl;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            cout<<ptr->data<<endl;
            ptr=ptr->next;
        }
        cout<<ptr->data<<endl;
    }
}

void peek()
{
    cout<<front->data<<endl;
}

int main()
{
    int ch;

    do
    {
        cout<<"1.INSERT"<<endl;
        cout<<"2.DELETE"<<endl;
        cout<<"3.DISPLAY"<<endl;
        cout<<"4.PEEK"<<endl;

        cout<<"Enter the choice : "<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            deleteNode();
            break;

        case 3:
            display();
            break;

        case 4:
            peek();
            break;
        
        default:
            break;
        }
    } while(ch!=5);
    
}
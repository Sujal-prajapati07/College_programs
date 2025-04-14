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
            start=new_node;
            new_node->next=start;
            rear=new_node;
        }
        else
        {
            rear->next=new_node;
            new_node->next=start;
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

    while(ptr->next!=start)
    {
        cout<<ptr->data<<"\t";
        ptr=ptr->next;
    }
    cout<<ptr->data;
}

void sumOfelement(node *start)
{
    node *ptr=start;

    int sum=0;

    while(ptr->next!=start)
    {
        sum=sum+ptr->data;
        ptr=ptr->next;
    }
    sum=sum+ptr->data;

    cout<<"Sum of the all element is : "<<sum<<endl;
}

int main()
{
    int ch;

    do
    {
        cout<<"1.Create list"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Sum of all elements"<<endl;

        cout<<"Enter the choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            start=create(start);
            cout<<"<-----List created----->"<<endl;
            break;

        case 2:
            display(start);
            cout<<endl;
            break;

        case 3:
            sumOfelement(start);
            cout<<endl;
            break;
        }
    } while (ch!=4);
    
}

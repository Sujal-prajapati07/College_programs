#include<iostream>
using namespace std;
class stack
{
    public:
    int data;
    stack *next;
};

stack *top=NULL;

stack *push(stack *top)
{
    stack *new_node;
    new_node=new stack();
    int num;

    cout<<"Enter -1 to end"<<endl;
    cout<<"Enter the value:";
    cin>>num;

    new_node->data=num;

        if(top==NULL)
        {
            top=new_node;
            top->next=NULL;
        }
        else
        {
            new_node->next=top;
            top=new_node;
        }
   
    return top;
}

stack *display(stack *top)
{
    stack *ptr=top;

    if(top==NULL)
    {
        cout<<"LINKLIST IS EMPTY"<<endl;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            cout<<ptr->data<<"\t";
            ptr=ptr->next;
        }
        cout<<ptr->data<<endl;
    }
    return top;
}

void peep(stack *top)
{
    cout<<"Top Element is : "<<top->data<<endl;
}

stack *pop(stack *top)
{
    stack *ptr=top;

    if(top==NULL)
    {
        cout<<"Stack underflow"<<endl;
    }
    else
    {
        top=top->next;
        cout<<"Pop element is : "<<ptr->data<<endl;
        free(ptr);
    }
    return top;
}

int main()
{
    int ch;

    do
    {
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Peep"<<endl;
        cout<<"4.Display"<<endl;
        cout<<"5.EXIT"<<endl;

        cout<<"Enter the choice : "<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
            top=push(top);
            break;

        case 2:
            top=pop(top);
            break;

        case 3:
            peep(top);
            break;

        case 4:
            top=display(top);
            break;

        default:
            cout<<"Exit"<<endl;
            break;
        }
    } while (ch!=5);

    return 0;
}
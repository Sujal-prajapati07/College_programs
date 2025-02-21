#include<iostream>
using namespace std;
class node
{
    public:
    int data; //store value for this node
    node *next;
};
node *start=NULL; //point to the starting node
node *rear=NULL; //point to the last node

node *create(node *start)
{
    node *new_node; //create new nodes for the link list
    int num; //store the value enterd by the user
    cout<<"enter the -1 to end"<<endl;
    cout<<"Enter the value:";
    cin>>num;
    while(num!=-1) //user does not enter -1 then loop is continue
    {
        new_node=new node(); //assign address and create the new node
        new_node->data=num;
        if(start==NULL)
        {
            new_node->next=NULL; 
            start=new_node; //update the start pointer
            rear=new_node; //update the rear pointer
        }
        else
        {
            rear->next=new_node;
            new_node->next=NULL;
            rear=new_node;
        }
        cout<<"Enter the value:";
        cin>>num;
    }
    return start;
}

void *display(node *start)
{
    node *ptr;
    ptr=start;
    if(start==NULL)
    {
        cout<<"List is empty"<<endl;
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
    cout<<"\n";
}

node *insert_beg(node *start)
{
    node *new_node;
    int num;
    cout<<"Enter the data:";
    cin>>num;
    new_node=new node();
    new_node->data=num;
    new_node->next=start;
    start=new_node;
    return start;
}

 node *insert_end(node *start)
 {
    node *ptr,*new_node;
    int num;

    cout<<"Enter the data:";
    cin>>num;

    new_node=new node();
    new_node->data=num;
    ptr=start;
    
    while(ptr->next != NULL)
    {
        ptr=ptr->next;
        ptr->next= new_node;
        new_node->next = NULL;
    }
    return start;
 }

node *insert_after(node *start)
{
    node *ptr,*new_node,*preptr;
    int num,val;
    cout<<"Enter the data:"<<endl;
    cin>>num;
    cout<<"Enter the value after which the data hase to be inserted:";
    cin>>val;
    new_node=new node();
    new_node->data = num;
    ptr= start;
    preptr=start;
    while(preptr->data != val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
        new_node->next = ptr;
        preptr->next= new_node;
    return start;
}

node *delete_beg(node *start)
{
    node *ptr;
    if(start==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        ptr=start;
        start=start->next;
        free(ptr);
    }
    return start;
}

node *delete_end(node *start)
{
    node *ptr,*preptr;
    ptr = start;
    if(start==NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        while(ptr->next != NULL)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
           preptr->next=NULL;
           free(ptr);
    }
    return start;
}

// node *delete_after(node *start)
// {
//     node *ptr,*preptr;
//     int val;
//     cout<<"Enter the value of the node after that node which you want delete:"<<endl;
//     cin>>val;
    
//     ptr=start;
//     preptr=ptr;
//     if(start==NULL)
//     {
//         cout<<"List is empty"<<endl;
//     }
//     else
//     {
//         while(preptr->data != val)
//         {
//             preptr=ptr;
//             ptr= ptr->next;
//         }
//         preptr->next=ptr->next;
//         free(ptr);
//     }
//  return start;
// }

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

    do{
        cout<<"1.create a list"<<endl;
        cout<<"2.Display list"<<endl;
        cout<<"3.Insert node to begining"<<endl;
        cout<<"4.Insert node to end"<<endl;
        cout<<"5.Insert at after a node"<<endl;
        cout<<"6.Delete at Beginning"<<endl;
        cout<<"7.Delete at ending"<<endl;
        cout<<"8.Delete at after"<<endl;

        cout<<"Enter your choice:";
        cin>>ch;
        
        switch (ch)
        {
        case 1:
            start=create(start);
            cout<<"Link list created"<<endl;
            break;
        
        case 2:
            display(start);
            break;

        case 3:
            start=insert_beg(start);
            break;
        
        case 4:
            start=insert_end(start);
            break;

        case 5:
            start=insert_after(start);
            break;

        case 6:
            start=delete_beg(start);
            break;

        case 7:
            start=delete_end(start);
            break;

        case 8:
            start=delete_after(start);
            break;
        }
    }
    while(ch!=9);
    return 0;
}
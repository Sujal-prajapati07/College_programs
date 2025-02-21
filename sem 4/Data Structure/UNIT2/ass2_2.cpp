// Write a CPP program using switch case as below:
//  1. Create a single linked list 
//  2. Display single linked list
//  3. Delete the 3rd Node from the  Linkedlist  
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
    node *new_node;
    int num;
    cout<<"Enter -1 to end:"<<endl;
    cout<<"Enter the value:";
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
        cout<<"Enter the value:"<<endl;
        cin>>num;
    }
    return start;
}

void *display(node *start)
{
    node *ptr=start;

    if(start==NULL)
    {
        cout<<"LINK IS EMPTY"<<endl;
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

  node *ptr = start;
  node *preNode;
  int count = 0;
  int index;
  cout<<"Enter the index:"<<endl;
  cin>>index;
  while (ptr != NULL)
  {
    if (count == index)
    {
      preNode->next = ptr->next;
      free(ptr);
      break;
    }
    preNode = ptr;
    ptr = ptr->next;
    count++;
  }
  return start;
}

int main()
{
    int ch;
    do
    {
        cout<<"1.Create a single linked list"<<endl;
        cout<<"2.Display single linked list"<<endl;
        cout<<"3.Delete the 3rd Node from the  Linkedlist"<<endl;

        cout<<"Enter the choice:"<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
            start=create(start);
            break;
        
        case 2:
            display(start);
            break;

        case 3:
            start=delete_after(start);
            break;
        }
    } while (ch!=4);

    return 0;
}
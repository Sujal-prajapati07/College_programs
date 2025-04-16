#include<iostream>
using namespace std;
#define MAX 5

int Queue[MAX];

int front=-1,rear=-1;

void enqueue()
{
    int num;

    if((front==rear+1) || (front==0 && rear==MAX-1))
    {
        cout<<"Queue is overflow"<<endl;
    }
    else if(front==-1 && rear==-1)
    {
        cout<<"Enter the number to be insert : ";
        cin>>num;
        front=rear=0;  //queue starts at index 0
        Queue[rear]=num;
    }
    else if(rear==MAX-1 && front!=0)
    {
        cout<<"\n Enter the number to be insert :";
        cin>>num;
        rear=0; //insert new element at index 0
        Queue[rear]=num;
    }
    else
    {
        cout<<"\n Enter the number to be insert :";
        cin>>num;
        rear++; //if none condition apply then rear++ and insert the element
        Queue[rear]=num;
    }
}

void dequeue()
{
    if(front==-1)
    {
        cout<<"Queue is underflow"<<endl;
    }
    else
    {
        int val=Queue[front];

        cout<<"Remove element : "<<val<<endl;

       
        if(front==rear)
        {
            front=rear-1;
        }
        else if(front==MAX-1)
        {
            front=0;
        }
        else
        {
            front++;
        }
    }
}

void peek()
{
    if(front==-1)
    {
        cout<<"Queue is underflow"<<endl;
    }
    else
    {
        cout<<Queue[front]<<endl;
    }
}

void display()
{
    if(front==-1)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }

    cout<<"Queue elements are: ";

    if(front<=rear)
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<Queue[i]<<endl;
        }
    }
    else 
    {
        for(int i=front;i<MAX;i++)
        {
            cout<<Queue[i]<<endl;
        }
        for(int i=0;i<=rear;i++)
        {
            cout<<Queue[i]<<endl;
        }
    }
     cout << endl;
}


int main()
{
    int ch;

    do
    {
        cout<<"1. Insert an element"<<endl;
        cout<<"2. Delete an element"<<endl;
        cout<<"3. PEEK"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Exit"<<endl;

        cout<<"Enter your choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            enqueue();
            break;
        
        case 2:
            dequeue();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;
        }
    } while (ch!=5);
}




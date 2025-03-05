#include<iostream>
#define max 10
using namespace std;
int Queue[max];
int front=-1,rear=-1;

void enqueue()
{
    int num;

    cout<<"Enter the number : ";
    cin>>num;

    if(rear==max-1)
    {
        cout<<"QUEUE IS OVERFLOW"<<endl;
    }
    else
    {
        if(front==-1 && rear==-1)
        {
            front=rear=0;
        }
        else
        {
            rear++;
        }
        Queue[rear]=num;
    }
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Delete element is : "<<Queue[front]<<endl;
        front++;
    }
}

void peek()
{
    cout<<"Top element is : "<<Queue[front];
    cout<<endl;
}

void display()
{
    if(front==-1 || front>rear)
    {
        cout<<"QUEUE IS EMPTY"<<endl;
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<Queue[i]<<endl;
        }
    }
}

int main()
{
    int val,ch;

    do
    {
        cout<<"1. Insert an element"<<endl;
        cout<<"2. Delete an element"<<endl;
        cout<<"3. PEEK"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Exit"<<endl;
      
        cout<<"Enter your choice: ";
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
    return 0;
}
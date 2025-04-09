#include<iostream>
using namespace std;

int Queue[5];

int n=5,front=-1,rear=-1;

void enqueue()
{
    int marks;

    cout<<"------Marks of 5 subjects------"<<endl;

    for (int i=0;i<n;i++)
    {
        cout<<"Enter marks : "<<i+1<<endl;
        cin>>marks;

        if(rear>=n-1)
        {
            cout<<"Queue overflow"<<endl;
            break;
        }
        else
        {
            if(front==-1)
            {
                front=0;
            }
            rear++;
            Queue[rear]=marks;
        }
    }
}

void percentage()
{
    if(front==-1 || front>rear)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        int sum=0;

        for(int i=front;i<=rear;i++)
        {
            sum=sum+Queue[i];
        }

        float per=(float)sum/n;

        cout<<"---------------------------------"<<endl;
        cout<<"Percentage is : "<<per<<" %"<<endl;
        cout<<"---------------------------------"<<endl;
    }
}

int main()
{
    int ch;

    do
    {
        cout<<"1.Enter the marks"<<endl;
        cout<<"2.Percentage"<<endl;

        cout<<"Enter the choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            enqueue();
            break;
        
        case 2:
            percentage();
            break;

        case 3:
            cout<<"EXIT"<<endl;
            break;
        }
    } while (ch!=3);
    
}
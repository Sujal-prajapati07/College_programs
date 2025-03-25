#include<iostream>
using namespace std;
int stack[5];
int n=5,top=-1;

void push() //stack create
{
	int val;
    cout<<"Enter -1 to end"<<endl;
    cout<<"Enter value to be pushed : "<<endl;
    cin>>val;
    while(val!=-1)
    {
        if(top>=n-1)
        {
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            top++;
            stack[top]=val;
        }
        cout<<"Enter value to be pushed : "<<endl;
        cin>>val;
    }
}

void pop() //top element remove
{
    if(top<=-1)
    {
        cout<<"Stack underflow"<<endl;
    }
    else
    {
        cout<<"The popped element is : "<<stack[top]<<endl;
        top--;
    }
}

void peek() //top element display
{
    cout<<"The Peek element is : "<<stack[top]<<endl;
}

void Display() //stackk display
{
    if(top>=0)
    {
        cout<<"Stack elements are : ";
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<" ";
        }
    }
    else
    {
        cout<<"Stack is empty"<<endl;
    }
    cout<<endl;
}

void maxValue()
{
	int max=stack[0];

	for(int i=1;i<=top;i++)
	{
		if(stack[i]>max)
		{
			max=stack[i];
		}
	}

	cout<<"Maximum value is : "<<max<<endl;
}

int main()
{
    int ch;

    do{
        cout<<"1.Push in stack"<<endl;
        cout<<"2.Pop from stack"<<endl;
        cout<<"3.Display Stack"<<endl;
        cout<<"4.Peek"<<endl;
        cout<<"5.Max Value"<<endl;
        cout<<"6.Exit"<<endl;
        
        cout<<"Enter the choice : "<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;
        
        case 3:
            Display();
            break;

        case 4:
            peek();
            break;

        case 5:
        	maxValue();
        	break;

        case 6:
            cout<<"Exit"<<endl;
            break;
        default:
            cout<<"INVALID CHOICE"<<endl;
            break;
        }
    }while(ch!=6);

    return 0;
}
// write a c++ program that declares and calls the function to perform various mathematical 
// functions(Add, Subtract, Multiply, divide)
#include<iostream>

using namespace std;

class arithmetic
{
    public:
    int answer;

    int addition(int a,int b)
    {
        answer=a+b;
        cout<<"\nAddition is : "<<answer;
    }
    int substraction(int a,int b)
    {
        answer=a-b;
        cout<<"\nsubstraction is : "<<answer;
    }
    int mul(int a,int b)
    {
        answer=a*b;
        cout<<"\nmultiplication is : "<<answer;
    }
    int div(int a,int b)
    {
        answer=a/b;
        cout<<"\nDivision is : "<<answer;
    }
    int mod(int a,int b)
    {
        answer=a%b;
        cout<<"\nmodulos is : "<<answer;
    }
};

int main()
{
    arithmetic obj;

    int a,b;

    cout<<"\nEnter the a:";
    cin>>a;

    cout<<"\nEnter the b:";
    cin>>b;

    obj.addition(a,b);
    obj.substraction(a,b);
    obj.mul(a,b);
    obj.div(a,b);
    obj.mod(a,b);

    cout<<"\n\n";

    return 0;
}
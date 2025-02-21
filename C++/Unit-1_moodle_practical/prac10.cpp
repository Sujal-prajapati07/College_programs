// Write a C++ program that will ask user to input two numbers and check whether values are equal or not using assignment operator

#include<iostream>

using namespace std;

class assign
{
    public:
    int a,b;
    void assign_ment()
    {
        cout<<"----------------------------------";
        
        if(a==b)
        {
            cout<<"\nValues are equal";
        }
        else
        {
            cout<<"\nValues are not equal";
        }
    }
}obj;

int main()
{
    cout<<"\nEnter the number1:";
    cin>>obj.a;

    cout<<"\nEnter the number2:";
    cin>>obj.b;

    obj.assign_ment();

    cout<<"\n\n";

    return 0;
    
}
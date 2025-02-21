//  Write a C++ program to demonstrate the use of default arguments in function overloading

#include<iostream>

using namespace std;

void sum(float a=1,float b=2)
{
    int sum=a+b;
    cout<<"\nSum of both value is : "<<sum;
}

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b;

    cout<<"\nEnter a:";
    cin>>a;

    cout<<"\nEnter b:";
    cin>>b;

    sum();
    int add=sum(a,b);
    cout<<"\nAddition of two digit is : "<<add;

    cout<<"\n\n";

    return 0;
}
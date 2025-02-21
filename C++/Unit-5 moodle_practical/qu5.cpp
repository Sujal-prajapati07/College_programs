//Write a C++ program to perform arithmetic operations on two numbers and throw an exception if the dividend is zero or does not contain an operator.

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    int add,sub,mul;
    float div;

    cout<<"Enter the a : "<<endl;
    cin>>a;

    cout<<"Enter the b : "<<endl;
    cin>>b;

    add=a+b;
    cout<<"Addition : "<<add<<endl;
    sub=a-b;
    cout<<"Substraction : "<<sub<<endl;
    mul=a*b;
    cout<<"Multiplication : "<<mul<<endl;

    try
    {
       if(b==0)
       {
        throw "error:";
       }
       else
       {
            div=a/b;
            cout<<"Divison is : "<<div;
       }
    }
    catch(const char *x)
    {
        cout<<x<<"cant division by 0";
    }
}
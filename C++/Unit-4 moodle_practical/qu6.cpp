//Write a C++ Program to add, subtract, multiply and divide two numbers using class 
//template.
#include<iostream>
using namespace std;
template<class T>
class add_val
{
    public:
    void func(T a,T b)
    {
        T add,sub,mul,div;

        cout<<"-------------------------------------"<<endl;
        add=a+b;
        cout<<"addition of both value is : "<<add<<endl;

        cout<<"-------------------------------------"<<endl;
        sub=a-b;
        cout<<"substraction of both value is : "<<sub<<endl;

        cout<<"-------------------------------------"<<endl;
        mul=a*b;
        cout<<"multiplication of both value is : "<<mul<<endl;

        cout<<"-------------------------------------"<<endl;
        div=a/b;
        cout<<"divison of both value is : "<<div<<endl;
    }
};

int main()
{
    int a,b;

    add_val<int>obj;
    cout<<"Enter the value a:"<<endl;
    cin>>a;

    cout<<"Enter the value b:"<<endl;
    cin>>b;

    obj.func(a,b);
}
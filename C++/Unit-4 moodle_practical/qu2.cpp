//Write a C++ Program to to add two numbers with use of template function.
#include<iostream>
using namespace std;
class add
{
    public:
    template<class T>
    void func(T a,T b)
    {
        T add=a+b;
        cout<<add<<endl;
    }
};

int main()
{
    add obj;
    add obj2;

    int a,b;

    cout<<"Enter the a and b:"<<endl;
    cin>>a>>b;

    cout<<"Interger addition"<<endl;
    obj.func(a,b);

    float c,d;

    cout<<"Enter the c and d:"<<endl;
    cin>>c>>d;

    cout<<"float addition"<<endl;
    obj2.func(c,d);
}
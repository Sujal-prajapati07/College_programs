#include<iostream>

using namespace std;

class A{
    public:
    A()
    {
        cout<<"Hello";
    }
    A(int a,int b)
    {
        cout<<"\na = "<<a;
        cout<<"\nb = "<<b;
    }
}obj;

int main()
{
    A obj();
    A obj1(3,5);

    cout<<"\n\n";

    return 0;
}


//Write a C++ program to swap the values of two integers

#include<iostream>

using namespace std;

class swap
{
    public:
    void swap_num(int a,int b,int c)
    {
        c=a;
        a=b;
        b=c;

        cout<<"\n\nAfter swaping value a:"<<a;
        cout<<"\n\nAfter swaping value b:"<<b;
    }
}obj;

int main()
{
    int a,b,c;
    cout<<"\nEnter the a:";
    cin>>a;

    cout<<"\nEnter the b:";
    cin>>b;

    obj.swap_num(a,b,c);

    cout<<"\n\nBefore swaping value a:"<<a;
    cout<<"\n\nBefore swaping value b:"<<b;

    cout<<"\n\n";

    return 0;


}
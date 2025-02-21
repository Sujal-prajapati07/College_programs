#include<iostream>

using namespace std;

class swap_num{
    public:
    int a,b,c;
    void func()
    {
        c=a;
        a=b;
        b=c;

        cout<<"\n\nAfter swaping value a is : "<<a;
        cout<<"\n\nAfter swaping value b is : "<<b;
    }
};

int main()
{
    swap_num obj;

    cout<<"\n\nEnter the a:";
    cin>>obj.a;

    cout<<"\n\nEnter the b:";
    cin>>obj.b;

    obj.func();

    cout<<"\n\n";

    return 0;
}
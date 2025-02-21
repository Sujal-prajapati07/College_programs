#include<iostream>
using namespace std;
int main()
{
    int a,b;

    cout<<"Enter the value of a:";
    cin>>a;

    cout<<"Enter the value of b:";
    cin>>b;

    cout<<"\n------------------------------";

    cout<<"\n Entered value of a:"<<a;

    cout<<"\n Entered value of b:"<<b;

    cout<<"\n------------------------------";

    cout<<"\n\n ---a>b---"<<"\n"<<a<<"\n"<<b<<"\n"<<"Answer of both value is:"<<(a>b);
    cout<<"\n\n ---a<b---"<<"\n"<<a<<"\n"<<b<<"\n"<<"Answer of both value is:"<<(a<b);
    cout<<"\n\n ---a>=b---"<<"\n"<<a<<"\n"<<b<<"\n"<<"Answer of both value is:"<<(a>=b);
    cout<<"\n\n ---a<=b---"<<"\n"<<a<<"\n"<<b<<"\n"<<"Answer of both value is:"<<(a<=b);
    cout<<"\n\n ---a==b---"<<"\n"<<a<<"\n"<<b<<"\n"<<"Answer of both value is:"<<(a==b);
    cout<<"\n\n ---a!=b---"<<"\n"<<a<<"\n"<<b<<"\n"<<"Answer of both value is:"<<(a!=b);

    cout<<"\n\n";
    return 0;
}
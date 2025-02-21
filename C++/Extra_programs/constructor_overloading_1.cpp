#include<iostream>

using namespace std;

class Arithmetic_opt{
    public:
    Arithmetic_opt(int a,int b)
    {
        cout<<"Answer of (a+b) = "<<(a+b);
    }
    Arithmetic_opt(double a,double b)
    {
        cout<<"Answer of (a+b) = "<<(a+b);
    }
}obj;

int main()
{
    int a,b;

    cout<<"Enter a:";
    cin>>a;

    cout<<"Enter b:";
    cin>>b;

    Arithmetic_opt obj(a,b);
    Arithmetic_opt obj1(10.5,20.5);

    cout<<"\n\n";

    return 0;
}
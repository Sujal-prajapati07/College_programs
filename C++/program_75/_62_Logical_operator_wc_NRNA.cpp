#include<iostream>
using namespace std;

class logic_oprtr
{
    public:
    int a,b;
    void logic_func()
    {
        cout<<"\n(a>b) && (a>=b) = "<<(a>b)&&(a>=b);
        cout<<"\n(a<b) || (a>=b) = "<<(a<b)||(a>=b);
        cout<<"\n!(a>b) && (a<b) = "<<!(a>b)&&(a<b);
    }
}obj;

int main()
{
    cout<<"Enter the no1:";
    cin>>obj.a;

    cout<<"Enter the no2:";
    cin>>obj.b;

    obj.logic_func();

    cout<<"\n\n";

    return 0;
}
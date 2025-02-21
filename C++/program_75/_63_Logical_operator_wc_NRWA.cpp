#include<iostream>
using namespace std;

class logic_oprtr
{
    public:
    void logic_func(int a,int b)
    {
        cout<<"\n(a>b) && (a>=b) = "<<(a>b)&&(a>=b);
        cout<<"\n(a<b) || (a>=b) = "<<(a<b)||(a>=b);
        cout<<"\n!(a>b) && (a<b) = "<<!(a>b)&&(a<b);
    }
}obj;

int main()
{
    int a,b;
    
    cout<<"Enter the no1:";
    cin>>a;

    cout<<"Enter the no2:";
    cin>>b;

    obj.logic_func(a,b);

    cout<<"\n\n";

    return 0;
}
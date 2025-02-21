#include<iostream>

using namespace std;

class rel_oprt{
    public:
    int a,b;
    void rel_func()
    {
        cout<<"\nAnswer of both value is:"<<(a>b);
        cout<<"\nAnswer of both value is:"<<(a<b);
        cout<<"\nAnswer of both value is:"<<(a>=b);
        cout<<"\nAnswer of both value is:"<<(a<=b);
        cout<<"\nAnswer of both value is:"<<(a==b);
        cout<<"\nAnswer of both value is:"<<(a!=b);
    }
}obj;

int main()
{
    cout<<"Enter the number1:";
    cin>>obj.a;

    cout<<"Enter the number2:";
    cin>>obj.b;

    obj.rel_func();

    cout<<"\n\n";

    return 0;
}
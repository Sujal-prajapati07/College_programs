#include<iostream>

using namespace std;

class rel_oprt{
    public:
    void rel_func(int a,int b)
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
    int a,b;
    
    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    obj.rel_func(a,b);

    cout<<"\n\n";

    return 0;
}
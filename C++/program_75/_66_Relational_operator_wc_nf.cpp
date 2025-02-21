#include<iostream>

using namespace std;

class rel_oprt{
    public:
    int a,b;
}obj;

int main()
{
    cout<<"Enter the number1:";
    cin>>obj.a;

    cout<<"Enter the number2:";
    cin>>obj.b;

    cout<<"\nAnswer of both value is:"<<(obj.a>obj.b);
    cout<<"\nAnswer of both value is:"<<(obj.a<obj.b);
    cout<<"\nAnswer of both value is:"<<(obj.a>=obj.b);
    cout<<"\nAnswer of both value is:"<<(obj.a<=obj.b);
    cout<<"\nAnswer of both value is:"<<(obj.a==obj.b);
    cout<<"\nAnswer of both value is:"<<(obj.a!=obj.b);

    cout<<"\n\n";

    return 0;
}
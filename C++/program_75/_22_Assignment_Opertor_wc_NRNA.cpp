#include<iostream>

using namespace std;

class assi_oprtr{

    public:
    int a,b;

    void assigment()
    {
        cout<<"\n\n a+=b"<<" Answer of both value is:"<<(a+=b);
        cout<<"\n\n a-=b"<<" Answer of both value is:"<<(a-=b);
        cout<<"\n\n a*=b"<<" Answer of both value is:"<<(a*=b);
        cout<<"\n\n a/=b"<<" Answer of both value is:"<<(a/=b);
        cout<<"\n\n a%=b"<<" Answer of both value is:"<<(a%=b);
        cout<<"\n\n a==b"<<" Answer of both value is:"<<(a==b);
    }
}obj;

int main()
{
    cout<<"Enter the number1:";
    cin>>obj.a;

    cout<<"Enter the number2:";
    cin>>obj.b;

    obj.assigment();

    cout<<"\n\n";

    return 0;
}
#include<iostream>

using namespace std;

class assi_oprtr{

    public:
    int a,b;

    void assigment(int x,int y)
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
    int x,y;
    
    cout<<"Enter the number1:";
    cin>>obj.a;

    cout<<"Enter the number2:";
    cin>>obj.b;

    obj.assigment(x,y);

    cout<<"\n\n";

    return 0;
}
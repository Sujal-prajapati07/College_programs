#include<iostream>

using namespace std;

class bit_opt{
    public:
    int a,b;
    void task()
    {
        cout<<"(a & b) = "<<(a&b);
        cout<<"(a | b) = "<<(a|b);
        cout<<"(a ^ b) = "<<(a^b);
        cout<<"(~a) , (~b) = "<<(~a)<<(~b);
        cout<<"(a<<) = "<<(a<<1);
        cout<<"(a>>) = "<<(a>>1);
    }
}obj;

int main()
{
    cout<<"Enter the a:";
    cin>>obj.a;

    cout<<"Enter the b:";
    cin>>obj.b;

    obj.task();

    cout<<"\n\n";

    return 0;
}
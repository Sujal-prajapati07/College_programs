#include<iostream>

using namespace std;

class bit_opt{
    public:
    void task(int a,int b)
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
    int a,b;
    
    cout<<"Enter the a:";
    cin>>a;

    cout<<"Enter the b:";
    cin>>b;

    obj.task(a,b);

    cout<<"\n\n";

    return 0;
}
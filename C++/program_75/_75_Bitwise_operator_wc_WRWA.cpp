#include<iostream>

using namespace std;

class bit_opt{
    public:
    int X,Y,Z,P,Q,R;
    int task(int a,int b)
    {
        X=(a&b);
        Y=(a|b);
        Z=(a^b);
        P=(~a)<<(~b);
        Q=(a<<1);
        R=(a>>1);
        return 1;
    }
}obj;

int main()
{
    int a,b,ans;

    cout<<"Enter the a:";
    cin>>a;

    cout<<"Enter the b:";
    cin>>b;

    ans=obj.task(a,b);

    if(ans==1)
    {
        cout<<"Answers is "<<obj.X;
        cout<<"Answers is "<<obj.Y;
        cout<<"Answers is "<<obj.Z;
        cout<<"Answers is "<<obj.P;
        cout<<"Answers is "<<obj.Q;
        cout<<"Answers is "<<obj.R;
    }

    cout<<"\n\n";

    return 0;
}
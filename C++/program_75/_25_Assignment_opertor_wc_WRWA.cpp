#include<iostream>

using namespace std;

class assi_oprtr{

    public:
    int assigment(int &add,int &sub,int &mul,int &div,int &mod,int &equ,int a,int b)
    {
        cout<<"\n-----------------------------";
        add=(a+=b);

        cout<<"\n-----------------------------";
        sub=(a-=b);

        cout<<"\n-----------------------------";
        mul=(a*=b);

        cout<<"\n-----------------------------";
        div=(a/=b);

        cout<<"\n-----------------------------";
        mod=(a%=b);

        cout<<"\n-----------------------------";
        equ=(a==b);
        return 1;
    }
}obj;

int main()
{
    int a,b,add,sub,mul,div,mod,equ,ans;

    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    ans=obj.assigment(add,sub,mul,div,mod,equ,a,b);

    if(ans==1)
    {
        cout<<"\nAnswer is = "<<add;
        cout<<"\nAnswer is = "<<sub;
        cout<<"\nAnswer is = "<<mul;
        cout<<"\nAnswer is = "<<div;
        cout<<"\nAnswer is = "<<mod;
        cout<<"\nAnswer is = "<<equ;
    }

    cout<<"\n\n";

    return 0;
}
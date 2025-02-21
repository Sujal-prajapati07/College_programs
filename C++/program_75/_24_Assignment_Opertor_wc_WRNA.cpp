#include<iostream>

using namespace std;

class assi_oprtr{

    public:
    int add,sub,mul,div,mod,equ;
    int a,b;

    int assigment()
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
    int ans;

    cout<<"Enter the number1:";
    cin>>obj.a;

    cout<<"Enter the number2:";
    cin>>obj.b;

    ans=obj.assigment();

    if(ans==1)
    {
        cout<<"\nAnswer is = "<<obj.add;
        cout<<"\nAnswer is = "<<obj.sub;
        cout<<"\nAnswer is = "<<obj.mul;
        cout<<"\nAnswer is = "<<obj.div;
        cout<<"\nAnswer is = "<<obj.mod;
        cout<<"\nAnswer is = "<<obj.equ;
    }

    cout<<"\n\n";

    return 0;
}
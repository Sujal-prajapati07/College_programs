#include<iostream>

using namespace std;

class rel_oprt{
    public:
    int X,Y,Z,C,P,R;
    int rel_func(int a,int b)
    {
         X=(a>b);
         Y=(a<b);
         Z=(a>=b);
         C=(a<=b);
         P=(a==b);
         R=(a!=b);

        return 1;
    }
}obj;

int main()
{
    int a,b,ans;
    
    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    ans=obj.rel_func(a,b);

    if(ans==1)
    {
        cout<<"\nAnswer of both value is:"<<obj.X;
        cout<<"\nAnswer of both value is:"<<obj.Y;
        cout<<"\nAnswer of both value is:"<<obj.Z;
        cout<<"\nAnswer of both value is:"<<obj.C;
        cout<<"\nAnswer of both value is:"<<obj.P;
        cout<<"\nAnswer of both value is:"<<obj.R;
    }

    cout<<"\n\n";

    return 0;
}
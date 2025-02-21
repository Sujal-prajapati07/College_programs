#include<iostream>

using namespace std;

class rel_oprt{
    public:
    int X,Y,Z,C,P,R;
    int a,b;
    int rel_func()
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
    int ans;
    
    cout<<"Enter the number1:";
    cin>>obj.a;

    cout<<"Enter the number2:";
    cin>>obj.b;

    ans=obj.rel_func();

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
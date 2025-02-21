#include<iostream>
using namespace std;
class max_number{
    public:
    int max_value(int a,int b)
    {
        if(a>b)
        {
            cout<<a<<" is greater than "<<b;
        }
    else
        {
            cout<<b<<" is greater than "<<a;
        }
        return 0;
    }
}obj_max;

int main()
{
    int a,b,ans;
    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    ans=obj_max.max_value(a,b);

    cout<<"\n\n";

    return 0;
}
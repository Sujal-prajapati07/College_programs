#include<iostream>
using namespace std;
class max_number{
    public:
    int min_value(int a,int b)
    {
        if(a<b)
        {
            cout<<a<<" is less than "<<b;
        }
    else
        {
            cout<<b<<" is less than "<<a;
        }
        return 0;
    }
}obj_min;

int main()
{
    int a,b,ans;
    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    ans=obj_min.min_value(a,b);

    cout<<"\n\n";

    return 0;
}
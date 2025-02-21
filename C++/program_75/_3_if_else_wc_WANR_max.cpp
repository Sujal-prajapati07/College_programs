#include<iostream>
using namespace std;
class max_number{
    public:
    void max_value(int a,int b)
    {
        if(a>b)
        {
        cout<<a<<" is greter than "<<b;
        }
    else
        {
        cout<<b<<" is greter than "<<a;
        }
    }
}obj_max;

int main()
{
    int a,b;
    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    obj_max.max_value(a,b);

    cout<<"\n\n";

    return 0;
}
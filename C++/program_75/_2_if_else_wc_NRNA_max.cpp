#include<iostream>
using namespace std;
class max_number{
    public:
    int a,b;

    void max_value()
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
    cout<<"Enter the number1:";
    cin>>obj_max.a;

    cout<<"Enter the number2:";
    cin>>obj_max.b;

    obj_max.max_value();

    cout<<"\n\n";

    return 0;
}
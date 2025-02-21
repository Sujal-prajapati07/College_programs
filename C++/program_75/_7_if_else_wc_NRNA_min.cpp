#include<iostream>
using namespace std;
class max_number{
    public:
    int a,b;

    void min_value()
    {
        if(a<b)
        {
        cout<<a<<" is less than "<<b;
        }
    else
        {
        cout<<b<<" is less than "<<a;
        }
    }
}obj_min;

int main()
{
    cout<<"Enter the number1:";
    cin>>obj_min.a;

    cout<<"Enter the number2:";
    cin>>obj_min.b;

    obj_min.min_value();

    cout<<"\n\n";

    return 0;
}
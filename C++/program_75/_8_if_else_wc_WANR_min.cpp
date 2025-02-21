#include<iostream>
using namespace std;
class max_number{
    public:
    void min_value(int a,int b)
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
    int a,b;
    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    obj_min.min_value(a,b);

    cout<<"\n\n";

    return 0;
}
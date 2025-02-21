#include<iostream>
using namespace std;
class max_number{
    public:
    int a,b;
    int max_value()
    {
        if(a>b)
        {
            return 1;
        }
    else
        {
            return 0;
        }
    }
}obj_max;

int main()
{
    int ans;
    
    cout<<"Enter the number1:";
    cin>>obj_max.a;

    cout<<"Enter the number2:";
    cin>>obj_max.b;

    ans=obj_max.max_value();

    if(ans==1)
    {
        cout<<obj_max.a<<" is greater than "<<obj_max.b;
    }
    else{
        cout<<obj_max.b<<" is greater than "<<obj_max.a;
    }
    cout<<"\n\n";

    return 0;
}
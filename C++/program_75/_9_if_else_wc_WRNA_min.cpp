#include<iostream>
using namespace std;
class max_number{
    public:
    int a,b;
    int min_value()
    {
        if(a<b)
        {
            return 1;
        }
    else
        {
            return 0;
        }
    }
}obj_min;

int main()
{
    int ans;
    
    cout<<"Enter the number1:";
    cin>>obj_min.a;

    cout<<"Enter the number2:";
    cin>>obj_min.b;

    ans=obj_min.min_value();

    if(ans==1)
    {
        cout<<obj_min.a<<" is less than "<<obj_min.b;
    }
    else{
        cout<<obj_min.b<<" is less than "<<obj_min.a;
    }
    cout<<"\n\n";

    return 0;
}
#include<iostream>
using namespace std;
class max_number{
    public:
    int a,b;
}obj_max;

int main()
{
    cout<<"Enter the number1:";
    cin>>obj_max.a;

    cout<<"Enter the number2:";
    cin>>obj_max.b;

    if(obj_max.a>obj_max.b)
    {
        cout<<obj_max.a<<" is greter than "<<obj_max.b;
    }
    else{
        cout<<obj_max.b<<" is greter than "<<obj_max.a;
    }

    cout<<"\n\n";

    return 0;
}
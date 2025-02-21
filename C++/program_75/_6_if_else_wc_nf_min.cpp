#include<iostream>
using namespace std;
class min_number{
    public:
    int a,b;
}obj_min;

int main()
{
    cout<<"Enter the number1:";
    cin>>obj_min.a;

    cout<<"Enter the number2:";
    cin>>obj_min.b;

    if(obj_min.a<obj_min.b)
    {
        cout<<obj_min.a<<" is less than "<<obj_min.b;
    }
    else{
        cout<<obj_min.b<<" is less than "<<obj_min.a;
    }

    cout<<"\n\n";

    return 0;
}
#include<iostream>

using namespace std;

class ternary_min
{
    public:
    int a,b;
    void ternary_val()
    {
        int ans = (a<b) ? a:b;

        cout<<ans<<" is minimum";
    }
}obj;

int main()
{

    cout<<"Enter the number1:";
    cin>>obj.a;

    cout<<"Enter the number2:";
    cin>>obj.b;

    obj.ternary_val();

    cout<<"\n\n";

    return 0;
}


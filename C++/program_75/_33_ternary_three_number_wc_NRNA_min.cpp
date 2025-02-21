#include<iostream>

using namespace std;

class ternary_min
{
    public:
    int a,b,c;
    void ternary_val()
    {
        int ans = (a<b) ? ((a<c) ? a:c) :  ((b<c) ? b:c);

        cout<<ans<<" is minimum";
    }
}obj;

int main()
{

    cout<<"Enter the number1:";
    cin>>obj.a;

    cout<<"Enter the number2:";
    cin>>obj.b;

    cout<<"Enter the number3:";
    cin>>obj.c;

    obj.ternary_val();

    cout<<"\n\n";

    return 0;
}


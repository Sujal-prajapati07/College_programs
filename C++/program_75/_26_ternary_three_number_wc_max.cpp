#include<iostream>

using namespace std;

class ternary_max
{
    public:
    int a,b,c;
}obj;

int main()
{

    cout<<"Enter the number1:";
    cin>>obj.a;

    cout<<"Enter the number2:";
    cin>>obj.b;

    cout<<"Enter the number3:";
    cin>>obj.c;

    int ans = (obj.a>obj.b) ? ((obj.a>obj.c) ? obj.a:obj.c) :  ((obj.b>obj.c) ? obj.b:obj.c);

    cout<<ans<<" is big";

    cout<<"\n\n";

    return 0;
}


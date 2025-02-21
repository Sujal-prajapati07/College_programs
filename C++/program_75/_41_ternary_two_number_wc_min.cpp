#include<iostream>

using namespace std;

class ternary_min
{
    public:
    int a,b;
}obj;

int main()
{

    cout<<"Enter the number1:";
    cin>>obj.a;

    cout<<"Enter the number2:";
    cin>>obj.b;

    int ans = (obj.a<obj.b) ? obj.a:obj.b;

    cout<<ans<<" is minimum";

    cout<<"\n\n";

    return 0;
}


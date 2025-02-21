#include<iostream>

using namespace std;

class ternary_max
{
    public:
    void ternary_val(int a,int b)
    {
        int ans = (a<b) ? a:b;

        cout<<ans<<" is minimum";
    }
}obj;

int main()
{
    int a,b;

    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    obj.ternary_val(a,b);

    cout<<"\n\n";

    return 0;
}


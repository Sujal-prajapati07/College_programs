#include<iostream>

using namespace std;

class ternary_min
{
    public:
    void ternary_val(int a,int b,int c)
    {
        int ans = (a<b) ? ((a<c) ? a:c) :  ((b<c) ? b:c);

        cout<<ans<<" is minimum";
    }
}obj;

int main()
{
    int a,b,c;

    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    cout<<"Enter the number3:";
    cin>>c;

    obj.ternary_val(a,b,c);

    cout<<"\n\n";

    return 0;
}


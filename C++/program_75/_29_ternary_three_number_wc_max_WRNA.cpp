#include<iostream>

using namespace std;

class ternary_max
{
    public:
    int a,b,c;
    int ternary_val()
    {
        int ans = (a>b) ? ((a>c) ? a:c) :  ((b>c) ? b:c);

       return ans;
    }
}obj;

int main()
{
    int result;

    cout<<"Enter the number1:";
    cin>>obj.a;

    cout<<"Enter the number2:";
    cin>>obj.b;

    cout<<"Enter the number3:";
    cin>>obj.c;

    result=obj.ternary_val();

    cout<<result<<" is big";

    cout<<"\n\n";

    return 0;
}


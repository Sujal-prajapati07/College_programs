#include<iostream>

using namespace std;

class ternary_max
{
    public:
    int a,b;
    int ternary_val()
    {
        int ans = (a>b) ? a:b ;

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

    result=obj.ternary_val();

    cout<<result<<" is maximum";

    cout<<"\n\n";

    return 0;
}


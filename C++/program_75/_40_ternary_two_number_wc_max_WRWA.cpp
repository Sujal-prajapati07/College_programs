#include<iostream>

using namespace std;

class ternary_max
{
    public:
    int ternary_val(int a,int b)
    {
        int ans = (a>b) ? a:b ;

       return ans;
    }
}obj;

int main()
{
    int a,b;
    int result;

    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    result=obj.ternary_val(a,b);

    cout<<result<<" is big";

    cout<<"\n\n";

    return 0;
}


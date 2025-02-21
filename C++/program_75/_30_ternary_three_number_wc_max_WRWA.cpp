#include<iostream>

using namespace std;

class ternary_max
{
    public:
    int ternary_val(int a,int b,int c)
    {
        int ans = (a>b) ? ((a>c) ? a:c) :  ((b>c) ? b:c);

       return ans;
    }
}obj;

int main()
{
    int a,b,c;
    int result;

    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    cout<<"Enter the number3:";
    cin>>c;

    result=obj.ternary_val(a,b,c);

    cout<<result<<" is big";

    cout<<"\n\n";

    return 0;
}


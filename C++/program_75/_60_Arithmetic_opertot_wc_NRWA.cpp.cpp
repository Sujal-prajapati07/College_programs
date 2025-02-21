#include <iostream>
using namespace std;
class ArithOp
{
    public:

    void func(int a,int b)
    {
         cout<<"\n Addition of "<<a<<" and "<<b<<" is = "<<(a+b);
        cout<<"\n--------------------------";

    cout<<"\n Subtraction of "<<a<<" and "<<b<<" is = "<<(a-b);
        cout<<"\n--------------------------";

    cout<<"\n Multiplication of "<<a<<" and "<<b<<" is = "<<(a*b);
        cout<<"\n--------------------------";

    cout<<"\n Division of "<<a<<" and "<<b<<" is = "<<(a/b);
        cout<<"\n--------------------------";

    cout<<"\n Modulo of "<<a<<" and "<<b<<" is = "<<(a%b);
    }
};
int main()
{
    ArithOp obj;
    int a,b;

    cout<<"\n Enter the value of a:";
    cin>>a;

    cout<<"\n Enter the value of b:";
    cin>>b;

    cout<<"\n--------------------------";

    cout<<"\nEnter value of a is = "<<a;
    cout<<"\nEnter value of b is = "<<b;

    obj.func(a,b);

    return 0;
}
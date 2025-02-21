#include <iostream>
using namespace std;
class ArithOp
{
    public:
    int a,b;

    void func()
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

    cout<<"\n Enter the value of a:";
    cin>>obj.a;

    cout<<"\n Enter the value of b:";
    cin>>obj.b;

    cout<<"\n--------------------------";

    cout<<"\nEnter value of a is = "<<obj.a;
    cout<<"\nEnter value of b is = "<<obj.b;

    obj.func();

    return 0;
}
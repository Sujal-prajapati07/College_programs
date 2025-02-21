#include <iostream>
using namespace std;
class ArithOp
{
    public:
    int a,b;
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

     cout<<"\n Addition of "<<obj.a<<" and "<<obj.b<<" is = "<<(obj.a+obj.b);
        cout<<"\n--------------------------";

    cout<<"\n Subtraction of "<<obj.a<<" and "<<obj.b<<" is = "<<(obj.a-obj.b);
        cout<<"\n--------------------------";

    cout<<"\n Multiplication of "<<obj.a<<" and "<<obj.b<<" is = "<<(obj.a*obj.b);
        cout<<"\n--------------------------";

    cout<<"\n Division of "<<obj.a<<" and "<<obj.b<<" is = "<<(obj.a/obj.b);
        cout<<"\n--------------------------";

    cout<<"\n Modulo of "<<obj.a<<" and "<<obj.b<<" is = "<<(obj.a%obj.b);

    return 0;
}
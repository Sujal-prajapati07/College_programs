//Write program for swapping two values of different data type with use of function template
#include<iostream>
using namespace std;
class swap_val
{
    public:
    template<class T>
    void func(T a,T b)
    {
        T temp;
        temp=a;
        a=b;
        b=temp;

        cout<<"After swap a:"<<a<<endl;
        cout<<"After swap b:"<<b<<endl;
    }
};

int main()
{
    swap_val obj;
    swap_val obj1;

    int a,b;

    cout<<"Enter the value a and b:"<<endl;
    cin>>a>>b;

    cout<<"Integer swap value:"<<endl;
    obj.func(a,b);

    float c,d;

    cout<<"Enter the value c and d:"<<endl;
    cin>>c>>d;

    cout<<"float swap value:"<<endl;
    obj1.func(c,d);
}
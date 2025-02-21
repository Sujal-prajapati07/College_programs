#include<iostream>

using namespace std;

class max_number{
    public:
    int a,b,c;
    void maxi_number()
    {
        if(a>b && a>c)
        {
            cout<<"a is bigger";
        }
        else if(b>a && b>c)
        {
            cout<<"b is bigger";
        }
        else if(c>a && c>b)
        {
            cout<<"c is bigger";
        }
        else{
            cout<<"INVALID";
        }
    }
}obj;

int main()
{
    cout<<"Enter the number1:";
    cin>>obj.a;

    cout<<"Enter the number2:";
    cin>>obj.b;

    cout<<"Enter the number3:";
    cin>>obj.c;

    obj.maxi_number();

    cout<<"\n\n";

    return 0;
}
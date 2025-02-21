#include<iostream>

using namespace std;

class max_number{
    public:
    void maxi_number(int a,int b,int c)
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
    int a,b,c;
    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    cout<<"Enter the number3:";
    cin>>c;

    obj.maxi_number(a,b,c);

    cout<<"\n\n";

    return 0;
}
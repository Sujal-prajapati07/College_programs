#include<iostream>

using namespace std;

class min_number{
    public:
    int a,b,c;
    void mini_number()
    {
        if(a<b && a<c)
        {
            cout<<"a is minimum";
        }
        else if(b<a && b<c)
        {
            cout<<"b is minimum";
        }
        else if(c<a && c<b)
        {
            cout<<"c is minimum";
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

    obj.mini_number();

    cout<<"\n\n";

    return 0;
}
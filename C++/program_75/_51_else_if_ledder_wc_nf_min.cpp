#include<iostream>

using namespace std;

class nes_if{
    public:
    int a,b,c;
}obj;

int main()
{
    cout<<"Enter the number1:";
    cin>>obj.a;

    cout<<"Enter the number2:";
    cin>>obj.b;

    cout<<"Enter the number3:";
    cin>>obj.c;

    if(obj.a<obj.b && obj.a<obj.c)
    {
        cout<<"a is minimum";
    }
    else if(obj.b<obj.a && obj.b<obj.c)
    {
        cout<<"b is minimum";
    }
    else if(obj.c<obj.a && obj.c<obj.b)
    {
        cout<<"c is minimum";
    }
    else{
        cout<<"INVALID";
    }

    cout<<"\n\n";

    return 0;
}
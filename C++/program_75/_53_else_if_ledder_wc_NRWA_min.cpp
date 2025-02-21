#include<iostream>

using namespace std;

class min_number{
    public:
    void mini_number(int a,int b,int c)
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
    int a,b,c;
    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    cout<<"Enter the number3:";
    cin>>c;

    obj.mini_number(a,b,c);

    cout<<"\n\n";

    return 0;
}
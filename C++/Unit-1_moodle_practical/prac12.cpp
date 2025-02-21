//Write a C++ program to check minimum and maximum of two numbers using Ternary operator

#include<iostream>

using namespace std;

class min_max
{
    public:
    int a,b;
    void max_min()
    {
        int ans = (a>b) ? a:b ;
        int ans1 = (a<b) ? a:b ;


        cout<<"\n"<<ans<<" is maximum";
        cout<<"\n"<<ans1<<" is minimum";
    }
}obj;

int main()
{
    cout<<"Enter the number1:";
    cin>>obj.a;

    cout<<"Enter the number2:";
    cin>>obj.b;

    obj.max_min();

    cout<<"\n\n";

    return 0;

}


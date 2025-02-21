#include<iostream>
using namespace std;

class simple_intrest
{
    public:
    int p,r,t;
};

int main()
{
    simple_intrest simp;

    cout<<"Enter the principal amount:";
    cin>>simp.p;

    cout<<"Enter the rate:";
    cin>>simp.r;

    cout<<"Enter the time taken:";
    cin>>simp.t;

    double simpint=(simp.p*simp.r*simp.t)/100;

    cout<<"simple intrest is="<<simpint;

    cout<<"\n\n";
    return 0;
}
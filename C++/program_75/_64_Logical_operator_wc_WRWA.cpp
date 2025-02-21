#include<iostream>
using namespace std;

class logic_oprtr
{
    public:
    int andd,orr,noo;
   
    int logic_func(int a,int b)
    {
        andd=(a>b)&&(a>=b);
        orr=(a<b)||(a>=b);
        noo=!(a>b)&&(a<b);

        return 1;
    }
}obj;

int main()
{   
    int a,b,ans;

    cout<<"Enter the no1:";
    cin>>a;

    cout<<"Enter the no2:";
    cin>>b;

    ans=obj.logic_func(a,b);

    if(ans==1)
    {
        cout<<"\n(a>b) && (a>=b) = "<<obj.andd;
        cout<<"\n(a<b) || (a>=b) = "<<obj.orr;
        cout<<"\n!(a>b) && (a<b) = "<<obj.noo;
    }

    cout<<"\n\n";

    return 0;
}
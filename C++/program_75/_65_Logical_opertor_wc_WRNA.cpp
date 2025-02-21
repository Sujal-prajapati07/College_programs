#include<iostream>
using namespace std;

class logic_oprtr
{
    public:
    int andd,orr,noo;
    int a,b;
   
    int logic_func()
    {
        andd=(a>b)&&(a>=b);
        orr=(a<b)||(a>=b);
        noo=!(a>b)&&(a<b);

        return 1;
    }
}obj;

int main()
{   
    int ans;

    cout<<"Enter the no1:";
    cin>>obj.a;

    cout<<"Enter the no2:";
    cin>>obj.b;

    ans=obj.logic_func();

    if(ans==1)
    {
        cout<<"\n(a>b) && (a>=b) = "<<obj.andd;
        cout<<"\n(a<b) || (a>=b) = "<<obj.orr;
        cout<<"\n!(a>b) && (a<b) = "<<obj.noo;
    }

    cout<<"\n\n";

    return 0;
}
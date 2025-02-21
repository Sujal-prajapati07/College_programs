#include<iostream>
using namespace std;

class logic_oprtr
{
    public:
    int a,b;
}obj;

int main()
{
    cout<<"\nEnter the value of a:";
    cin>>obj.a;

    cout<<"\nEnter the value of b:";
    cin>>obj.b;

    cout<<"\n------------------------------";

    cout<<"\n Entered value of a:"<<obj.a;

    cout<<"\n Entered value of b:"<<obj.b;

    cout<<"\n------------------------------";

   cout<<"\n ("<<obj.a<<">"<<obj.b<<")"<<"&&"<<"("<<obj.a<<">="<<obj.b<<")="<<(obj.a>obj.b)&&(obj.a>=obj.b); 
   cout<<"\n";

   cout<<"\n ("<<obj.a<<"<"<<obj.b<<")"<<"||"<<"("<<obj.a<<">="<<obj.b<<")="<<(obj.a<obj.b)||(obj.a>=obj.b);
   cout<<"\n";

   cout<<"\n !("<<obj.a<<">"<<obj.b<<")"<<"&&"<<"("<<obj.a<<"<"<<obj.b<<")="<<!(obj.a>obj.b)&&(obj.a<obj.b); 
   cout<<"\n";

   cout<<"\n\n";
   return 0;
}
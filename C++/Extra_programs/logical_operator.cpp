#include<iostream>
using namespace std;
int main()
{
    int a,b;

    cout<<"\nEnter the value of a:";
    cin>>a;

    cout<<"\nEnter the value of b:";
    cin>>b;

    cout<<"\n------------------------------";

    cout<<"\n Entered value of a:"<<a;

    cout<<"\n Entered value of b:"<<b;

    cout<<"\n------------------------------";

   cout<<"\n ("<<a<<">"<<b<<")"<<"&&"<<"("<<a<<">="<<b<<")="<<(a>b)&&(a>=b); 
   cout<<"\n";

   cout<<"\n ("<<a<<"<"<<b<<")"<<"||"<<"("<<a<<"<="<<b<<")="<<(a<b)||(a<=b);
   cout<<"\n";

   cout<<"\n !("<<a<<">"<<b<<")"<<"&&"<<"("<<a<<"<"<<b<<")="<<!(a>b)&&(a<b); 
   cout<<"\n";

   cout<<"\n\n";
   return 0;
}
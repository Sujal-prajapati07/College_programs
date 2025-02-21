#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cin>>a>>b;

    try
    {
        if(b==0)
        {
            throw "error";
        }
        else
        {
            int c=a/b;
            cout<<c;
        }
    }
    catch(const char *e)
    {
       cout<<e;
    }
    
}
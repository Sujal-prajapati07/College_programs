#include<iostream>

using namespace std;

class max_number{
    public:
    int maxi_number(int a, int b, int c)
    {
        if(a>b && a>c)
        {
            return 1;
        }
        else if(b>a && b>c)
        {
            return 2;
        }
        else if(c>a && c>b)
        {
            return 3;
        }
    }
}obj;

int main()
{
    int a,b,c,ans;

    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    cout<<"Enter the number3:";
    cin>>c;

    ans=obj.maxi_number(a,b,c);

   if(ans==1)
   {
        cout<<"a is bigger";
   }
   else if(ans==2)
   {
        cout<<"b is bigger";
   }
   else if(ans==3)
   {
        cout<<"c is bigger";
   }
   else{
        cout<<"INVALID";
   }

    cout<<"\n\n";

    return 0;
}
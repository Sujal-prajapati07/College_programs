#include<iostream>

using namespace std;

class min_number{
    public:
    int mini_number(int a, int b, int c)
    {
        if(a<b && a<c)
        {
            return 1;
        }
        else if(b<a && b<c)
        {
            return 2;
        }
        else if(c<a && c<b)
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

    ans=obj.mini_number(a,b,c);

   if(ans==1)
   {
        cout<<"a is minimum";
   }
   else if(ans==2)
   {
        cout<<"b is minimum";
   }
   else if(ans==3)
   {
        cout<<"c is minimum";
   }
   else{
        cout<<"INVALID";
   }

    cout<<"\n\n";

    return 0;
}
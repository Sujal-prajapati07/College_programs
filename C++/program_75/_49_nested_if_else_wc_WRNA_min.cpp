#include<iostream>
using namespace std;
class min_number{
    public:
    int a,b,c;
    int mini_value()
    {
        if(a<b)
        {
            if(a<c)
            {
                return 1;
            }
            else{
                return 3;
            }
        }
        else if(b<a)
        {
           if(b<c)
           {
                return 2;
           }
           else
           {
                return 3;
           }
        }
    }
}obj_min;

int main()
{
    int ans;
    
    cout<<"Enter the number1:";
    cin>>obj_min.a;

    cout<<"Enter the number2:";
    cin>>obj_min.b;

    cout<<"Enter the number3:";
    cin>>obj_min.c;

    ans=obj_min.mini_value();

    if(ans==1)
    {
        cout<<"a is minimum"<<endl;
    }
    else if(ans==2)
    {
        cout<<"b is minimum"<<endl;
    }
    else if(ans==3)
    {
        cout<<"c is minimum"<<endl;
    }
    cout<<"\n\n";

    return 0;
}
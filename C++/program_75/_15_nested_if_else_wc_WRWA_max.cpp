#include<iostream>
using namespace std;
class max_number{
    public:
    int maxi_value(int a, int b, int c)
    {
        if(a>b)
        {
            if(a>c)
            {
                return 1;
            }
            else{
                return 3;
            }
        }
        else if(b>a)
        {
           if(b>c)
           {
                return 2;
           }
           else
           {
                return 3;
           }
        }
    }
}obj_max;

int main()
{
    int a,b,c,ans;
    
    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    cout<<"Enter the number3:";
    cin>>c;

    ans=obj_max.maxi_value(a,b,c);

    if(ans==1)
    {
        cout<<"a is bigger"<<endl;
    }
    else if(ans==2)
    {
        cout<<"b is bigger"<<endl;
    }
    else if(ans==3)
    {
        cout<<"c is bigger"<<endl;
    }
    cout<<"\n\n";

    return 0;
}
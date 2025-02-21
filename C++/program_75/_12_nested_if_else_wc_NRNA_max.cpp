#include<iostream>

using namespace std;

class max_value{
    public:
    int a,b,c;
    void maxi_value()
    {
        if(a>b)
        {
            if(a>c)
            {
                cout<<"a is greater"<<endl;
            }
            else{
                cout<<"c is greater"<<endl;
            }
        }
       else if(b>a)
        {
            if(b>c)
            {
                cout<<"b is greater"<<endl;
            }
            else{
                cout<<"c is greater"<<endl;
            }
        }
    }
}obj_max;

int main()
{
    cout<<"Enter the number1:";
    cin>>obj_max.a;

    cout<<"Enter the number2:";
    cin>>obj_max.b;

    cout<<"Enter the number3:";
    cin>>obj_max.c;

    obj_max.maxi_value();

    cout<<"\n\n";

    return 0;
}
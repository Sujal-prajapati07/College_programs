#include<iostream>
using namespace std;
class max_number{
    public:
    void maxi_value(int a,int b,int c)
    {
        if(a>b)
        {
            if(a>c)
            {
                cout<<"a is greater"<<endl;
            }
            else
            {
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
    int a,b,c;

    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    cout<<"Enter the number3:";
    cin>>c;

    obj_max.maxi_value(a,b,c);

    cout<<"\n\n";

    return 0;
}
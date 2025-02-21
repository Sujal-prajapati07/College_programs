#include<iostream>

using namespace std;

class min_value{
    public:
    int a,b,c;
    void mini_value()
    {
        if(a<b)
        {
            if(a<c)
            {
                cout<<"a is greater"<<endl;
            }
            else{
                cout<<"c is greater"<<endl;
            }
        }
       else if(b<a)
        {
            if(b<c)
            {
                cout<<"b is greater"<<endl;
            }
            else{
                cout<<"c is greater"<<endl;
            }
        }
    }
}obj_min;

int main()
{
    cout<<"Enter the number1:";
    cin>>obj_min.a;

    cout<<"Enter the number2:";
    cin>>obj_min.b;

    cout<<"Enter the number3:";
    cin>>obj_min.c;

    obj_min.mini_value();

    cout<<"\n\n";

    return 0;
}
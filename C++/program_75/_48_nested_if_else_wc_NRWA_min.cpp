#include<iostream>
using namespace std;
class min_number{
    public:
    void mini_value(int a,int b,int c)
    {
        if(a<b)
        {
            if(a<c)
            {
                cout<<"a is minimum"<<endl;
            }
            else
            {
                cout<<"c is minimum"<<endl;
            }
        }
    else if(b<a)
        {
            if(b<c)
            {
                cout<<"b is minimum"<<endl;
            }
            else{
                cout<<"c is minimum"<<endl;
            }

        }
    }
}obj_min;

int main()
{
    int a,b,c;

    cout<<"Enter the number1:";
    cin>>a;

    cout<<"Enter the number2:";
    cin>>b;

    cout<<"Enter the number3:";
    cin>>c;

    obj_min.mini_value(a,b,c);

    cout<<"\n\n";

    return 0;
}
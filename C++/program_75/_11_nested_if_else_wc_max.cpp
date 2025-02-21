#include<iostream>

using namespace std;

class max_value{
    public:
    int a,b,c;
}obj_max;

int main()
{
    cout<<"Enter the number1:";
    cin>>obj_max.a;

    cout<<"Enter the number2:";
    cin>>obj_max.b;

    cout<<"Enter the number3:";
    cin>>obj_max.c;

    if(obj_max.a>obj_max.b)
    {
        if(obj_max.a>obj_max.c)
        {
            cout<<obj_max.a<<"value of a is greter than every number"<<endl;
        }
        else{
            cout<<obj_max.c<<"value of c is greter than every number"<<endl;
        }
    }
    else if(obj_max.b>obj_max.a)
    {
        if(obj_max.b>obj_max.c)
        {
            cout<<" value of b is greter than every number"<<endl;
        }
        else{
            cout<<"value of c is greter than every number"<<endl;
        }
    }

    return 0;

}
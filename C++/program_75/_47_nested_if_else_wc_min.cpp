#include<iostream>

using namespace std;

class min_value{
    public:
    int a,b,c;
}obj_min;

int main()
{
    cout<<"Enter the number1:";
    cin>>obj_min.a;

    cout<<"Enter the number2:";
    cin>>obj_min.b;

    cout<<"Enter the number3:";
    cin>>obj_min.c;

    if(obj_min.a>obj_min.b)
    {
        if(obj_min.a>obj_min.c)
        {
            cout<<obj_min.a<<"value of a is minimum than every number"<<endl;
        }
        else{
            cout<<obj_min.c<<"value of c is minimum than every number"<<endl;
        }
    }
    else if(obj_min.b>obj_min.a)
    {
        if(obj_min.b>obj_min.c)
        {
            cout<<" value of b is minimum than every number"<<endl;
        }
        else{
            cout<<"value of c is minimum than every number"<<endl;
        }
    }

    return 0;

}
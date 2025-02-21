#include<iostream>

using namespace std;

class max{
    public:
    int a,b;
    void maximum()
    {
        if(a>b)
        {
            cout<<"\n"<<a<<" is bigger than "<<b;
        }
        else{
            cout<<"\n"<<b<<" is bigger than "<<a;
        }
    }
}max_num;

int main()
{
    cout<<"Enter the first number:";
    cin>>max_num.a;

    cout<<"Enter the second number:";
    cin>>max_num.b;

    max_num.maximum();

    cout<<"\n\n";

    return 0;

}
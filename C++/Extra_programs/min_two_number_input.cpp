#include<iostream>

using namespace std;

class min{
    public:
    int a,b;
    void minimum()
    {
        if(a<b)
        {
            cout<<"\n"<<a<<" is smaller than "<<b;
        }
        else{
            cout<<"\n"<<b<<" is smaller than "<<a;
        }
    }
}min_num;

int main()
{
    cout<<"Enter the first number:";
    cin>>min_num.a;

    cout<<"Enter the second number:";
    cin>>min_num.b;

    min_num.minimum();

    cout<<"\n\n";

    return 0;

}
//Write a C++ Program to display largest among two numbers using function templates. Pass 
// Integer, Float and Character as parameter to the template

#include<iostream>
using namespace std;
class maximum
{
    public:
    template<class T>
    void func(T x,T y)
    {
        if(x>y)
        {
            cout<<x<<" is maximum"<<endl;
        }
        else
        {
            cout<<y<<" is maximum"<<endl;
        }
    }
};

int main()
{
    maximum obj;
    maximum obj1;
    maximum obj2;

    int x,y;
    cout<<"Enter the value1 : "<<endl;
    cin>>x;
    cout<<"Enter the value2 : "<<endl;
    cin>>y;
    cout<<"max value of integer"<<endl;
    obj.func(x,y);

    float a,b;
    cout<<"Enter the value1 : "<<endl;
    cin>>a;
    cout<<"Enter the value2 : "<<endl;
    cin>>b;
    cout<<"max value of float"<<endl;
    obj1.func(a,b);

    char m,n;
    cout<<"Enter the value1 : "<<endl;
    cin>>m;
    cout<<"Enter the value2 : "<<endl;
    cin>>n;
    cout<<"max value of char"<<endl;
    obj2.func((int)m,(int)n);
}
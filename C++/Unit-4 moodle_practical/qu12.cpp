// Write a program to create template class to find simple interest of integer and float value using function template.
#include<iostream>
using namespace std;
class intrest
{
    public:
    template<class T>
    void func(T p,T r,T t)
    {
        T total=(p*r*t)/100;
        cout<<"principal rate is : "<<total<<endl;
    }
};

int main()
{
    intrest obj;
    intrest obj1;

    int p,r,t;

    cout<<"Enter the p , r and t : "<<endl;
    cin>>p>>r>>t;

    cout<<"intrest in integer"<<endl;
    obj.func(p,r,t);

    float a,b,c;

    cout<<"Enter the p ,r and t : "<<endl;
    cin>>a>>b>>c;

    cout<<"intrest in float"<<endl;
    obj1.func(a,b,c);

}
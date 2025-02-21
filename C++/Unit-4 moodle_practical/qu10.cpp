//Write a program to define definition of member function template outside the class and 
//invoke the function.
#include<iostream>
using namespace std;
class temp
{
    public:
    template<class T> void func(T x);
};
template<class T> void temp::func(T x)
{
    cout<<x<<" invoke the function";
}

int main()
{
    temp obj;

    string name;

    cout<<"enter the name : "<<endl;
    cin>>name;

    obj.func(name);
}


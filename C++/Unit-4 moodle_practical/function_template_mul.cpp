#include<iostream>
using namespace std;
class A
{
    public:
    template<class T,class Y>
    void func(T a,Y b)
    {
        cout<<"value of a : "<<a<<endl;
        cout<<"value of b : "<<b<<endl;
    }
};

int main()
{
    A obj1;
    A obj2;

    obj1.func(5,6.5);
    obj2.func("sujal",5);
}
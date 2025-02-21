#include<iostream>
using namespace std;
class A
{
    public:
    template<class T>
    void func(T a)
    {
        cout<<"value is : "<<a<<endl;
    }
};

int main()
{
    A obj1;
    A obj2;

    obj1.func(5);
    obj2.func("sujal");
}
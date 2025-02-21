#include<iostream>
using namespace std;
template<class T,class Y>
class A
{
    public:
    void func(T a,Y b)
    {

        cout<<"value of a is : "<<a<<endl;

        cout<<"value of b is : "<<b<<endl;
    }
};

int main()
{
    A<int,float>obj1;
    obj1.func(5,2.3);

    A<float,string>obj2;
    obj2.func(5.6,"sujal");

    A<char,int>obj3;
    obj3.func('C',89);
    
}
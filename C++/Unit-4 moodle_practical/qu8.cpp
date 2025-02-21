//Write a program to show values of different data types using templates and constructor
#include<iostream>
using namespace std;
template<class T>
class sum
{
    private:
    T x;

    public:
    sum(T num)
    {
        x=num;
    }
    void func()
    {
        cout<<" value of x is : "<<x<<endl;
    }
};
int main()
{
    int a;
    float b;
    char c;

    cout<<"Enter the value a : "<<endl;
    cin>>a;

    cout<<"Enter the value b : "<<endl;
    cin>>b;

    cout<<"Enter the value c : "<<endl;
    cin>>c;

    sum<int>obj(a);
    obj.func();

    sum<float>obj1(b);
    obj1.func();

    sum<char>obj2(c);
    obj2.func();
}
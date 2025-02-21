#include<iostream>
using namespace std;
template<class T>
class b
{
    public:
    T a;
    void func()
    {
        cout<<"Enter the value : "<<endl;
        cin>>a;

        cout<<"value is : "<<a<<endl;
    }
};

int main()
{
    b<int>obj1;
    b<string>obj2;

    obj1.func();
    obj2.func();

}
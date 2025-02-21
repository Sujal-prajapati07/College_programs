#include<iostream>
using namespace std;
template<class T>
class val{
    public:
    void func(T a)
    {
        cout<<a;
    }
};
int main()
{
    val<int>obj;
    val<char>obj1;
    obj.func(6);
    obj1.func('c');
}
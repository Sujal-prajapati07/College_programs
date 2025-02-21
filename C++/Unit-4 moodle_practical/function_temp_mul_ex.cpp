#include<iostream>
using namespace std;
class func_mul{
    public:
    template<class T,class Y>
    void func(T a,Y b)
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

int main()
{
    func_mul obj;

    obj.func("Sujal",12);
    obj.func('c',52.3);
}
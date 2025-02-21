#include<iostream>
using namespace std;
class func_temp{
    public:
    template<class T>
    void func(T a)
    {
        cout<<a<<endl;
    }
};

int main()
{
    func_temp obj;

    obj.func(5);
    obj.func(10.52);
    obj.func("sujal");
    obj.func('s');
}
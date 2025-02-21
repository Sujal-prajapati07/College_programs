#include<iostream> ///member inside function overload
using namespace std;
class func_mul{
    public:
    template<class T>
    void func(T a,T b)
    {
       T c=a+b;
       cout<<c<<endl;
    }
    template<class M>
    void func(M x)
    {
        M y=5;
        cout<<x*y<<endl;
    }
};

int main()
{
    func_mul obj;

    obj.func(25,12);
    obj.func(6.2);
}
#include<iostream> ///member outside 
using namespace std;
class func_mul{
    public:
    template<class T>void func(T a,T b);
    template<class Y>void func(Y p);
};

//memeber outsode overloading
template<class T>void func_mul::func(T a,T b)
{
    T add=a+b;
    cout<<add<<endl;
}

template<class Y>void func_mul::func(Y p)
{
    Y q=3.2;
    Y sub=p-q;
    cout<<sub<<endl;
}

int main()
{
    func_mul obj;

    obj.func(25,12);
    obj.func(5.2);
}
#include<iostream>
using namespace std;
template<class T,class Y>
class val{
    public:
    void func(T a,Y b)
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main()
{
    val<int,float>obj;
    val<char,string>obj1;
    obj.func(6,2.5);
    obj1.func('c',"sujal");
}
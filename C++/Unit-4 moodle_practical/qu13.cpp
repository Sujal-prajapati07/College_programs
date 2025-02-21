// Write an overloaded template function area that calculates area of different shapes
#include<iostream>
using namespace std;
class over_load
{
    public:
    template<class T>
    void func(T r)
    {
        T pi=3.14;

        T ans=pi*r*r;

        cout<<"Area of circle is : "<<ans<<endl;;
    }
    template<class Y>
    void func(Y l,Y b)
    {
        Y ans=l*b;

        cout<<"Area of square is : "<<ans<<endl;
    }
};

int main()
{
    over_load obj;
    over_load obj1;

    int r;
    cout<<"Enter r for area of circle : "<<endl;
    cin>>r;
    obj.func(r);

    int l,b;
    cout<<"Enter l and b for area of rectangle : "<<endl;
    cin>>l>>b;
    obj.func(l,b);

}
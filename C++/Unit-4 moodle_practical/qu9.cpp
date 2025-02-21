//Write a program to display the reverse of a given number using template based function.
#include<iostream>
using namespace std;
class reverse
{
    public:
    template<class T>
    void func(T num)
    {
        T r,rev=0;
        while (num!=0)
        {
           r=num%10;
           rev=(rev*10+r);
           num=num/10;
        }
        cout<<"reverse number is : "<<rev<<endl;
    }
};

int main()
{
    reverse obj;

    int num;

    cout<<"Enter the number:";
    cin>>num;

    obj.func(num);
}
//Write a C++ Program to compute the square of number series till 10.

#include<iostream>

using namespace std;

class sqaure
{
    public:
    int i,squ;
    void func()
    {
        for(i=0;i<=10;i++)
        {
            squ=i*i;
        }
        cout<<"Answer is : "<<squ;
    }
}obj;

int main()
{
    obj.func();

    cout<<"\n\n";

    return 0;
}
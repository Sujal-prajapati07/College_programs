//Write a C++ Program to find the cube of a number using Inline Function
#include <iostream>
using namespace std;
class INLINE
{
    public:
    inline int c(int n)
    {
        return n*n*n;
    }
}obj;

int main()
{
    int n;

    cout<<"Enter the number :"<<endl;
    cin>>n;

    int res = obj.c(n);

    cout<<"Cude of number = "<<res<<endl;

    return 0;
}
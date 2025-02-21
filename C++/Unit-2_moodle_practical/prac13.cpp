// Write a c++ Program to demonstrate the use of Friend class to access the member of one 
//class
#include <iostream>
using namespace std;
// class A
// {
//     int a;
//     friend class B;
// }a1;
// class B
// {
//     public:
//     int swap(A obj)
//     {
//         int b,c;
//         cout<<"Enter a :";
//         cin>>obj.a;
//         cout<<"Enter b :";
//         cin>>b;

//         c = obj.a;
//         obj.a = b;
//         b = c;

//         cout<<"a = \n"<<obj.a;
//         cout<<"b = \n"<<b;

//     }
// }b1;
// int main()
// {
//     b1.swap(a1);
//     return 0;
// }

class A
{
    public:
    int a;
    friend class B;
}a1;

class B
{
    public:
    void swap(A obj)
    {
        int b,c;

        cout<<"Enter value for a : "<<endl;
        cin>>obj.a;

        cout<<"Enter value for b : "<<endl;
        cin>>b;

        c=obj.a;
        obj.a=b;
        b=c;

        cout<<"after swap value a : "<<obj.a<<endl;

        cout<<"after swap value b : "<<b<<endl;
    }
}b1;

int main()
{
    b1.swap(a1);

    return 0;
}
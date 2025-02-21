//  Write a C++ Program to find the sum of Numbers using Recursive Function

#include<iostream>

using namespace std;

// class digit
//     {
//         public:
//           int sum(int n)
//             {
//                 if(n<=0)
//                 {
//                     return n;
//                 }
//                 return n + sum(n-1);
//             }
//     };

// int main()
// {
//     digit obj;

//     int n,result;

//     cout<<"Enter the number:";
//     cin>>n;

//     result=obj.sum(n);

//     cout<<"sum is : "<<result;

//     cout<<"\n\n";

//     return 0;
    
// }

class digit
{
    public:
    int sum(int n)
    {
        if(n<=0)
        {
            return n;
        }
        return n+sum(n-1);
    }
};

int main()
{
    digit obj;

    int n,result;

    cout<<"Enter the number : ";
    cin>>n;

    result=obj.sum(n);

    cout<<result;

    return 0;
}
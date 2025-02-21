// write a c+ program to calculate factorial numbers using Recursion
#include<iostream>

using namespace std;

    // int factorial(int n)
    // {
    //     if(n<=1)
    //     {
    //         return 1;
    //     }
    //     return n*factorial(n-1);
    // }

class fact
    {
        public:
          int factorial(int n)
        {
            if(n<=1)
            {
                return 1;
            }
            return n*factorial(n-1);
        }
    };

int main()
{
    fact obj;

    int n,result;

    cout<<"Enter the number:";
    cin>>n;

    result=obj.factorial(n);

    cout<<"Factorial is : "<<result;

    cout<<"\n\n";

    return 0;
    
}
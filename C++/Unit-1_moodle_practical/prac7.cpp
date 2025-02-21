//Write a C++ program to check whether the integer entered by user is positive, negative or zero using nested if-else.

#include<iostream>

using namespace std;

class pos_neg
{
    public:
    int a;
    void check_num()
    {
        if(a>=0)
        {
            if(a==0)
            {
                cout<<"\nNumber is zero";
            }
            else{
                cout<<"\nNumber is positive";
            }
        }
        else{
            cout<<"\nNumber is negative";
        }
    }
}obj;

int main()
{
    cout<<"\nEnter the number:";
    cin>>obj.a;

    obj.check_num();

    cout<<"\n\n";

    return 0;
}
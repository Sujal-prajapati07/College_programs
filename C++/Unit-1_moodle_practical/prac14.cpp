// Write a C++ Program to print following pyramid
// *
// **
// ***
// ****
// *****

#include<iostream>

using namespace std;

class pyra
{
    public:
    int i,j,start,end;
    void pyra_mid()
    {
        for(i=start;i<=end;i++)
        {
            for(j=start;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
        
    }
}obj;

int main()
{
    cout<<"Enter the start:";
    cin>>obj.start;

    cout<<"Enter the end:";
    cin>>obj.end;

    obj.pyra_mid();

    cout<<"\n\n";

    return 0;
}
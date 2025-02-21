// Write a C++ program to print all the prime between 1 to 100.

#include<iostream>

using namespace std;

class primee
{
    public:
    int i,n,c=0;
    void pri_mee()
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            cout<<"\n"<<n<<" is Prime Number";
        }
        else{
            cout<<"\n"<<n<<" is Not a Prime Number";
        }
    }
}obj;

int main()
{
    cout<<"\nEnter the number:";
    cin>>obj.n;

    obj.pri_mee();

    cout<<"\n\n";

    return 0;
}
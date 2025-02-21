//NRNA
#include<iostream>
using namespace std;
class odd_even{
    public:
    int number;
    void odevn()
    {
        if(number%2==0)
        {
            cout<<number<<" is even";
        }
        else{
            cout<<number<<" is odd";
        }
    }
}oe;

int main()
{
    cout<<"Enter the number:";
    cin>>oe.number;

    oe.odevn();
    
    cout<<"\n\n";

    return 0;
}
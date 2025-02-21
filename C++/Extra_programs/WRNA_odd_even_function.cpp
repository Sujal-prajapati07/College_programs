//WRNA
#include<iostream>

using namespace std;

class odd_even{
    public:
    int number;
    int odevn()
    {
        if(number%2==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}oe;

int main()
{
    int result;

    cout<<"Enter the number:";
    cin>>oe.number;

    result=oe.odevn();

    if(result==1)
    {
        cout<<"even";
    }
    else{
        cout<<"odd";
    }

    cout<<"\n\n";

    return 0;
}
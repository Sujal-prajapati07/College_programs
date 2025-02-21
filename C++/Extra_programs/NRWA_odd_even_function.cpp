//NRWA
#include<iostream>

using namespace std;

class odd_even{
    public:
    int number;
    void odven(int num){
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
    int result,num;
    cout<<"Enter the number:";
    cin>>oe.number;

    oe.odven(num);

    cout<<"\n\n";

    return 0;
}
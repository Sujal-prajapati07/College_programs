// write a c++ program to check prime number using Function
#include<iostream>

using namespace std;

class prime_no{
    public:
    void PrimeNumber()
    {
        int n,i,c=0;
        cout<<"Enter the number:";
        cin>>n;

        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            cout<<"Number is prime";
        }
        else{
            cout<<"Number is not prime";
        }
    }
};

int main()
{
    prime_no obj;

    obj.PrimeNumber();

    cout<<"\n\n";

    return 0;
}
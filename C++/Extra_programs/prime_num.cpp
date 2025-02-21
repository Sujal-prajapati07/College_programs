#include<iostream>

using namespace std;

class prime_num
{
    public:
    prime_num(int n)
    {
      int i,c=0;

        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            cout<<"\nPrime Number";
        }
        else{
            cout<<"\nNot a prime number";
        }
    }
}pr;

int main()
{
    int n;

    cout<<"Enter the no:";
    cin>>n;

    prime_num pr(n);

    cout<<"\n\n";

    return 0;
}

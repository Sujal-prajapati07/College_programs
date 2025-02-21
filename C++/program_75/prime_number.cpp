#include <iostream>
using namespace std;
class PrimeNo
{
    public:
    PrimeNo()
    {
    int i,c=0,n;
    int k = n;

        cout<<"Enter the Number"<<endl;
        cin>>n;
        
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        if(c == 2)
        {
                cout<<"Prime no"<<endl;
        }
        else
        {
                cout<<"nah not a prime no."<<endl;;
        }
         
    }

};
int main()
{

    PrimeNo obj;
    return 0;
}
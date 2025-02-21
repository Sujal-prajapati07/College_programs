#include<iostream>

using namespace std;

class odd_even_num{
    public:
    void odd_even()
    {

        for(int i=1;i<=50;i++)
        {
            // if(i%2==0)  //even
            // {
            //     cout<<"\t"<<i;
            // }
            if(i%2!=0)     //odd
            {
                cout<<"\t"<<i;
            }
        }
    }
}odevn;

int main()
{
    odevn.odd_even();

    cout<<"\n\n";

    return 0;
}
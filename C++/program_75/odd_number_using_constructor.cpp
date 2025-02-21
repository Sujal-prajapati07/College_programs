#include<iostream>

using namespace std;

class odd_no
{
    public:
    odd_no()
    {
        int start,end;

        cout<<"Enter the start no:";
        cin>>start;

        cout<<"Enter the end no:";
        cin>>end;

        for(int i=start;i<=end;i++)
        {
            if(i%2==1)
            {
                cout<<"\n"<<i<<" odd number";
            }
        }
    }
};

int main()
{
    odd_no obj;
    cout<<"\n\n";
    return 0;
}
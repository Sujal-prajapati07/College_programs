#include<iostream>

using namespace std;

class loop_ex{
    public:
    int start,end;
    void func1()
    {
        int i;
        if(start<end)
        {
            i=start;
            while(i<=end)
            {
                cout<<i<<"\n";
                i++;
            }
        }
        else if(start>end)
        {
            i=start;
            while(i>=end)
            {
                cout<<i<<"\n";
                i--;
            }
        }
        else
        {
            cout<<"Both are equal";
        }
    }
}le;

int main()
{
    cout<<"Enter the starting value:";
    cin>>le.start;

    cout<<"Enter the ending value:";
    cin>>le.end;

    le.func1();

    cout<<"\n\n";

    return 0;

}
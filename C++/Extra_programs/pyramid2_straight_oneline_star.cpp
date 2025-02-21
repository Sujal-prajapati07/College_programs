/*
*****
*****
*****
*****
*****
*/
#include<iostream>

using namespace std;

class pyramid{
    public:
    int i,j,start,end;
    void pyra_mid()
    {
        for(i=start;i<=end;i++)
        {
            for(j=start;j<=end;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
    }
}pyrm;

int main()
{
    cout<<"Enter the start:";
    cin>>pyrm.start;

    cout<<"Enter the end:";
    cin>>pyrm.end;

    pyrm.pyra_mid();

    cout<<"\n\n";

    return 0;
}


// Write a C++ Program to print following pyramid
// ********
// *      *
// *      *
// *      *
// ********
#include<iostream>

using namespace std;

class pyra_mid
{
    public:
    int i,j,r,c;
    void pyramid()
    {
        cout<<"Enter the rows:";
        cin>>r;

        cout<<"Enter the cols:";
        cin>>c;

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==0 || i==r-1 || j==0 || j==c-1)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<"\n";
        }
    }
}obj;

int main()
{
    obj.pyramid();

    cout<<"\n\n";

    return 0;
}
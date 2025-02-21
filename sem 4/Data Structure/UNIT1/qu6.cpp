//Write a CPP program to represent sparse matrix in Triplet Representation.
#include<iostream>
using namespace std;

class triplet
{
    public:
    int i,j;
    int arr[3][3];

    void func()
    {
        cout<<"Enter the array elements:"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>arr[i][j];
            }
        }

        cout<<"Row col value"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(arr[i][j]!=0)
                {
                    cout<<i<<"   "<<j<<"    "<<arr[i][j]<<endl;
                }
            }
        }
    }
};

int main()
{
    triplet obj;

    obj.func();

    return 0;
}
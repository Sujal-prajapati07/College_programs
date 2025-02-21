// Write a CPP program to create a matrix and check whether that matrix is Sparse matrix or not.
#include<iostream>
using namespace std;
class sparse_mat
{
    public:
    int r,c;
    int NonZeroCounter=0,ZeroCounter=0;

    void func()
    {
        cout<<"Enter the row:";
        cin>>r;
        cout<<"Enter the col:";
        cin>>c;
        
        int arr[r][c];

        cout<<"Enter the array elements:"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>arr[i][j];
            }
        }

        cout<<"Array:"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<"\t"<<arr[i][j];
            }
            cout<<"\n";
        }

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(arr[i][j]==0)
                {
                    ZeroCounter++;
                }
                else if(arr[i][j]!=0)
                {
                    NonZeroCounter++;
                }
            }
        }

        if(ZeroCounter>NonZeroCounter)
        {
            cout<<"IT IS SPARSE MATRIX"<<endl;
        }
        else
        {
            cout<<"IT IS NOT SPARSE MATRIX"<<endl;
        }
    }
};

int main()
{
    sparse_mat obj;

    obj.func();

    return 0;
}
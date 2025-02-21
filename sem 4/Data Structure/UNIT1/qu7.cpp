//Write a CPP program to create a matrix and check whether that matrix is diagnol matrix or not.
#include<iostream>
using namespace std;

class diagnol_mat
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

        cout<<"Print the array:"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                  cout<<"\t"<<arr[i][j];
            }
            cout<<"\n";
        }

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i!=j && arr[i][j]!=0)
                {
                    cout<<"IT IS NOT DIAGNOAL MATRIX"<<endl;
                    return;
                }
            }
        }
        cout<<"IT IS DIAGONAL MATRIX"<<endl;
    }
};

int main()
{
    diagnol_mat obj;

    obj.func();

    return 0;
}
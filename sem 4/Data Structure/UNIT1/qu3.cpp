//Write a CPP program to create two dimensional array, pass that array to a user defined function and print it.
#include<iostream>
using namespace std;

class twod_array
{
    public:
    void func(int **arr,int row,int col)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    twod_array obj;

    int row,col;

    cout<<"Enter the row:"<<endl;
    cin>>row;

    cout<<"Enter the cols:"<<endl;
    cin>>col;

    int **arr=new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }

    cout << "Enter the elements of the matrix:\n"; 
    for(int i = 0; i < row; i++) 
    { 
        for(int j = 0; j < col; j++) 
        { 
            cin >> arr[i][j]; 
        } 
    }

    obj.func(arr,row,col);

    return 0;
}
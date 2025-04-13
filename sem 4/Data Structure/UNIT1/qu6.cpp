#include<iostream>

using namespace std;

int main()
{
    int r,c;

    cout<<"Enter the row : ";
    cin>>r;

    cout<<"Enter the column : ";
    cin>>c;

    int arr[r][c];

    cout<<"Enter the array elements : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Elements : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]!=0)
            {
                cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
            }
        }
    }
}
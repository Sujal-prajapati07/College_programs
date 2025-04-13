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

    int ZeroCounter=0;

    int NonZeroCounter=0;

    cout<<"Enter the array elements : ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Array element : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==0)
            {
                ZeroCounter++;
            }
            else
            {
                NonZeroCounter++;
            }
        }
    }

    if(ZeroCounter>NonZeroCounter)
    {
        cout<<"It is sparse matrix"<<endl;
    }
    else
    {
        cout<<"It is not sparse matrix"<<endl;
    }

}
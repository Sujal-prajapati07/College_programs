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

    cout<<"Print the array:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"\t"<<arr[i][j];
        }
        cout<<"\n";
    }

    cout<<"Upper Triangular : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i<j)
            {
                cout<<"\t"<<("0");
            }
            else
            {
                cout<<"\t"<<arr[i][j];
            }
        }
        cout<<"\n";
    }
    
    return 0;
}
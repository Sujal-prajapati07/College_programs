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

    bool flag=true;
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i!=j && arr[i][j]!=0)
            {
                flag=false;
                break;
            }
        }
    }
    
    if(flag)
    {
        cout<<"It is diagnol matrix"<<endl;
    }
    else
    {
        cout<<"It is not diagnol matrix"<<endl;
    }

    return 0;
}
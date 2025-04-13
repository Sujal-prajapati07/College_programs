#include<iostream>

using namespace std;

void display(int arr[10][10],int r,int c)
{
    cout<<"Array elements : "<<endl;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    int r,c;

    cout<<"Enter the row : ";
    cin>>r;

    cout<<"Enter the column : ";
    cin>>c;

    int arr[10][10]; //maximum size of array

    cout<<"Enter the array elements : ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }

    display(arr,r,c);
}
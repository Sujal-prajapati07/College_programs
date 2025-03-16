#include<iostream>
using namespace std;

int main()
{
    int temp;

    int arr[]={1,5,6,7,2};

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i;j++) // Stop at index 3-i       
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

    cout<<"Sorted array : ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
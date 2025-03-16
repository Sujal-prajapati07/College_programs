#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int smallestIndex=i; //This is unsorted part staring index

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallestIndex])
            {
                smallestIndex=j;
            }
        }

        int temp=arr[i];
        arr[i]=arr[smallestIndex];
        arr[smallestIndex]=temp;
    }

    cout<<"Sorted array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n=5;
    int arr[]={6,7,4,3,8};

    SelectionSort(arr,n);
}
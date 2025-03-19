#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=arr[i];

        int pre=i-1; //for check previous element

        while(pre>=0 && arr[pre]>current)
        {
            arr[pre+1]=arr[pre]; //push next element
            pre--; //for go to backward
        }

        arr[pre+1]=current; //current element
    }

    cout<<"Sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n=5;
    int arr[]={4,1,5,2,3};

    InsertionSort(arr,n);
}
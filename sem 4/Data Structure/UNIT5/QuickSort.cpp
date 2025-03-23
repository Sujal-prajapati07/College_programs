#include<iostream>
using namespace std;

int Partition(int arr[],int start,int end)
{
    int index=start-1; //index start-1 and then move forward

    int pivot=arr[end]; //last element as the pivot element

    for(int j=start;j<end;j++) 
    {
        if(arr[j]<pivot) //the current element is smaller than pivot
        {
            index++; 
            swap(arr[j],arr[index]);//swap cuurent element and partition index element
        }
    }

    index++;
    swap(arr[end],arr[index]);//place the pivot at the correct position
    return index;
}


void QuickSort(int arr[],int start,int end)
{
    if(start<end)
    {
        int pivotIndex=Partition(arr,start,end);

        QuickSort(arr,start,pivotIndex-1);//left
        QuickSort(arr,pivotIndex+1,end);//right
    }
}

int main()
{
    int arr[10];
    int n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }

    QuickSort(arr,0,n-1);

    cout<<"Sorted array : ";
    for(int i=0;i<n;i++) 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;

void BinarySearch(int arr[],int sizeOfArray,int target)
{
    int start=0,end=sizeOfArray-1;

    int found=0;

    while(start<=end)
    {
        int mid=start+end/2;

        if(arr[mid]==target)
        {
            cout<<"Element present in the array position : "<<mid+1<<endl;
            found=1;
            break;
        }
        else if(target>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }

    if(found==0)
    {
        cout<<"Element not found in array"<<endl;
    }
}

int main()
{
    int arr[10],sizeOfArray;
    int num;

    cout<<"Enter the sizeOfArray : "<<endl;
    cin>>sizeOfArray;
    
    cout<<"Enter the array element : "<<endl;
    for(int i=0;i<=sizeOfArray;i++)
    {
        cin>>arr[i];
    }

    cout<<"Array : ";
    for(int i=0;i<=sizeOfArray;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    cout<<"Enter the number to be search : ";
    cin>>num;

    BinarySearch(arr,sizeOfArray,num);

    return 0;
}
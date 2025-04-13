#include<iostream>

using namespace std;

void display(int arr[],int n)
{
    cout<<"Array elements : "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int n;

    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    display(arr,n);
}
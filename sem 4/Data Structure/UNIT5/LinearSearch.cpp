#include<iostream>
using namespace std;

void LinearSearch(int arr[],int n)
{
    int temp=-1;

    for(int i=0;i<5;i++)
    {
        if(arr[i]==n)
        {
            cout<<"Element found at index : "<<i<<endl;
            temp=0;
        }
    }

    if(temp==-1)
    {
        cout<<"Element not found"<<endl;
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};

    int num;

    cout<<"Enter the element to be search : ";
    cin>>num;

    LinearSearch(arr,num);

    return 0;

}
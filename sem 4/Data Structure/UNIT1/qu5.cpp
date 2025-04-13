#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the arry element : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Arry Element : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    cout<<endl;

    cout<<"Reverse order : "<<endl;
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i];
    }

}

//static
// int arr[5]={1,2,3,4,5};

// for(int i=5-1;i>=0;i--)
// {
//     cout<<arr[i];
// }


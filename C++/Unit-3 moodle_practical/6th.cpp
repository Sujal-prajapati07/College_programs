// Write a C++ program to find the Smllest element of a given array of integers pass array arguements in a Function
#include<iostream>
using namespace std;
class value{
    public:
    void display(int arr[],int n)
    {
        int min=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        cout<<"Minimum value is : "<<min<<endl;
    }
};
int main()
{
    value obj;

    int n;

    cout<<"Enter the size of array:"<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter the array element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    obj.display(arr,n);

    return 0;
}
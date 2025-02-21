//Write a C++ Program to find the total of all the array elements using Function.
#include<iostream>
using namespace std;
class element{
    public:
    void addition(int arr[],int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }   
        cout<<"Sum of all element is : "<<sum<<endl;
    }
};

int main()
{
    element obj;

    int n;

    cout<<"Enter the number of size:";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element:";
        cin>>arr[i];
    }

    obj.addition(arr,n);

    return 0;
}
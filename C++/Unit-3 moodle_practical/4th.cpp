// Write a C++ program to find the largest element of a given array of integers using Function
#include<iostream>
using namespace std;
class value{
    public:
    void display(int arr[],int n)
    {
        int max=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        cout<<"Maximum value is : "<<max<<endl;
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
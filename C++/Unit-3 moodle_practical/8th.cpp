//Write a C++ program to count the number of elements in an integer Array using Function
#include<iostream>
using namespace std;
class oneD{
    public:
    void method(int arr[],int n)
    {
        int c=0;

        for(int i=0;i<n;i++)
        {
            c++;
        }
        cout<<"The total elements are : "<<c<<endl;
    }
};
int main()
{
    oneD obj;

    int n;

    cout<<"Enter the number of size:";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element:";
        cin>>arr[i];
    }

    obj.method(arr,n);

    return 0;
}
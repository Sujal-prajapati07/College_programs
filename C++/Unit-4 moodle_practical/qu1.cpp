//Write a C++ Program to create a function template for finding a maximum value contained 
//in array.
#include<iostream>
using namespace std;
template <class T>
T func(T arr[],int len)
{
    T max=arr[0];

    for(int i=0;i<len;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int arr1[3]={12,15,18};
    double arr2[3]={50,60,70};

    int maxInt=func(arr1,3);

    double maxDouble=func(arr2,3);

    cout<<"Max integer : "<<maxInt<<endl;

    cout<<"Max double : "<<maxDouble<<endl;

    return 0;
}
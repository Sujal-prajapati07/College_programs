// Write a c++ Program to illustrate the traversal of an 1D Array.
#include<iostream>
using namespace std;
class oneD{
    public:
    int arr[5],i;
    void oned_array()
    {
        cout<<"Enter the array elements:"<<endl;
        
        for(i=0;i<5;i++)
        {
            cin>>arr[i];
        }

        cout<<"Print the array elements:"<<endl;

        for(i=0;i<5;i++)
        {
            cout<<"\t"<<arr[i];
        }
    }
};

int main()
{
    oneD obj;

    obj.oned_array();

    return 0;
}
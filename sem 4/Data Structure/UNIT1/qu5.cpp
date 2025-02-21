//Write a CPP  program that will display an array in reverse order
#include<iostream>
using namespace std;

class arr_reverse
{
    public:
    int n;

    void func()
    {
        cout<<"Enter the number of elements:"<<endl;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++)
        {
            cout<<"enter the elements:"<<endl;
            cin>>arr[i];
        }

        cout<<"DISPLAY IN REVERSE OREDR:"<<endl;
        for(int i=n-1;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    arr_reverse obj;

    obj.func();

    return 0;
}
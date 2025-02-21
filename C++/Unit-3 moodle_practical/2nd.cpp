//Write a c++ Program to illustrate the traversal of a 2D Array

#include<iostream>
using namespace std;
class twoD{
    public:
    int i,j;
    void twoD_array()
    {
        int arr[3][3];

        cout<<"Enter the array elements:"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>arr[i][j];
            }
        }

        cout<<"Print the array elements:"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<"\t"<<arr[i][j];
            }
            cout<<"\n";
        }
    }
};

int main()
{
    twoD obj;

    obj.twoD_array();

    return 0;
}
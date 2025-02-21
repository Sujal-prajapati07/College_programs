//Write a CPP program to sum all the diagonal element.
#include<iostream>
using namespace std;

class sum_element
{
    public:
    int i,j,sum=0;
    int arr[3][3];

    void func()
    {
        cout<<"Enter the array elements:"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>arr[i][j];
            }
        }

        cout<<"Print the array:"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                  cout<<"\t"<<arr[i][j];
            }
            cout<<"\n";
        }

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i==j)
                {
                    sum+=arr[i][j];
                }
            }
        }
        cout<<"SUM OF DIAGONAL MATRIX IS : "<<sum<<endl;
    }
};

int main()
{
    sum_element obj;

    obj.func();

    return 0;
}
//Write a CPP program to create a Matrix and print Lower Triangular.
#include<iostream>
using namespace std;

class lower_triangle
{
    public:
    int i,j;
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

        cout<<"LOWER TRIANGLE:"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i>j)
                {
                    cout<<"\t"<<("0");
                }
                else
                {
                    cout<<"\t"<<arr[i][j];
                }
            }
            cout<<"\n";
        }  
    }
};

int main()
{
    lower_triangle obj;

    obj.func();

    return 0;
}
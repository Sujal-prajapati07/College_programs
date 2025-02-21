//=>sparse matrix means the number of elemenet has more zero then non zero value

/*
[
4 0 3
1 0 0
0 6 0       
]
*/

#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter the row:";
    cin >> r;

    cout << "Enter the columns:";
    cin >> c;

    int arr[r][c],ZeroCounter,NonZeroCounter;

    ZeroCounter=0;
    NonZeroCounter=0;

    cout << "Enter the array elements:";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout << "Array Elements:"<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<"\t"<<arr[i][j];
        }
        cout<<"\n";
    }

     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j]==0)
            {
                ZeroCounter++;
            }
            else if(arr[i][j]!=0)
            {
                NonZeroCounter++;
            }
        }
        
    }

    if(ZeroCounter>NonZeroCounter)
    {
        cout<<"It is a sparse matrix";
    }
    else
    {
        cout<<"It is not a sparse matrix";
    }

    return 0;
}
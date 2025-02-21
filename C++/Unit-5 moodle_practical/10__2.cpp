/*
 Write a C++ program that reads a list of integers from the user and throws an exception if
any numbers are duplicates.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter size of an array : ";
    cin >> n;

    int arr[n];

    try
    {
        for (int i = 0; i < n; i++)
        {

            cout << "enter unique value for index " << i << " : ";
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    throw runtime_error("duplicate input detected !!");
                }
            }
        }
    }
    catch (const runtime_error &e)
    {
        cout << e.what();
    }

    return 0;
}



// #include <iostream>
// using namespace std;
// class qus11
// {
// public:
//     void fun1()
//     {
//         int n,c=0;
//         cout << "Enter the size for arr :";
//         cin >> n;

//         int arr[n];
//         cout << "enter arr elements:";
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

       

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i+1; j < n; j++)
//             {
//                if(arr[i] == arr[j])
//                {
//                 c++;
//                }
//             }
//         }

//         try
//         {
//         if(c==0){
//         cout<<"no duplicate";
//         }
//         else{
//            throw "error duplicate data.....";
//         }
        
//     }
//     catch(const char* e)
//     {
//         cout<<e;
//     }
//     }
// };
// int main()
// {
//     qus11 obj1;
//     obj1.fun1();
//     return 0;
// }
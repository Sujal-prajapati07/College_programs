#include<iostream>
using namespace std;

class arr_exp
{
    public:
    int index;
    void func()
    {
        int arr[4]={11,12,13,14};

        for(int i=0;i<4;i++)
        {
            cout<<" "<<arr[i];
        }
    }
};

int main()
{
    arr_exp obj;

    cout<<"Enter the index : "<<endl;
    cin>>obj.index;

    try
    {
       if(obj.index>=4)
       {
            throw "array out of bound";
       }
       else
       {
           obj.func();
       }
    }
    catch(const char* e)
    {
        cout<<e;
    }
    
}

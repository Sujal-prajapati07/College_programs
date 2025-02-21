#include<iostream>
using namespace std;
class negative_val
{
    public:
    void main(int n)
    {
        cout<<"Enter the value : "<<endl;
        cin>>n;

        if(n<0)
        {
            cout<<"can not be negative";
        }
        else
        {
            cout<<"value is : "<<n;
        } 
    }
};

int main()
{
    negative_val obj;
    
    int n;

    try
    {
        obj.main(n);
    }
    catch(const char* e)
    {
        cout<<e<<endl;
    }
    
}

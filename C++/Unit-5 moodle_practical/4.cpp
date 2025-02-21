/*
Write a C++ program which asks the user to input a number which should be greater than 
equal to zero and should be less than to 100, If not raise an exception.
*/
#include <iostream>
using namespace std;
class qus4
{
    public:
    void input()
    {
        int n;
        cout<<"enter a number:"<<endl;
        cin>>n;

        try
        {
            if(n<=0 )
            {
                throw "error : number must be bigger than 0 !";
            }
            else if( n>100)
            {
                throw "error : number must be smaller than 100 !";
            }
            else{
                cout<<"the num is = "<<n<<endl;
            }
        
        }
        catch(const char*e)
        {
            cout<<e;
        }
        
    }
};
int main()
{
    qus4 obj1;
    obj1.input();
    return 0;
}
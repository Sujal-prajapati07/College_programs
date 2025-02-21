/*/
 Write a C++ program to take a value from user and check the number is armstrong or not, If 
not than raise an exception
*/
#include<iostream>
using namespace std;
class qus12
{
    public:
    void fun1()
    {
        int n;
        int res,sum=0;
        cout<<"enter a number:";
        cin>>n;
        int temp = n;
        while(n>0)
        {
            res=n%10;
            sum=sum+(res*res*res);
            n=n/10;
        }
        try{
        if(sum == temp)
        {
           cout<<"armstrong";
        }
        else{
            throw "error...it is not an armstrong number..! ";
        }
        }
        catch(const char* e)
        {
            cout<<e;
        }

    }
};
int main()
{
    qus12 obj1;
    obj1.fun1();
    return 0;
}

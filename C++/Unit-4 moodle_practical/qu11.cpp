// Write a program to create template class to find binary value of a number given by user
#include<iostream>
using namespace std;
template <typename binary>
class findBinary
{
    public:
       binary n,k=0,ans=0;
       int counter=0,arr[8]; // 1 to 128

        void FindB(int n)
        {   
            while(n > 0)
            {
                k=n%2; //find 0 or 1 bit.
                n=n/2; //keep updating quotient
                arr[counter] = k; //put bits in array
                counter++; // increment array
            }
            
            for(int i=(counter-1); i>=0; i--) 
            cout<<arr[i]; //show array in reverse order
        }    
};
int main()
{
    int num;
    findBinary<int> obj;
    
    
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Binary representation : ";
    obj.FindB(num);
}
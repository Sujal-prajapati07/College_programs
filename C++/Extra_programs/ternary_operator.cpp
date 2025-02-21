#include<iostream>
using namespace std;
int main(){

    int a,b,min;

    cout<<"\n Enter the value of a:";
    cin>>a;

    cout<<"\n Enter the value of b:";
    cin>>b;

    cout<<"\n--------------------------";

    cout<<"\nEnter value of a is = "<<a;
    cout<<"\nEnter value of b is = "<<b;

    min=(a<b)?a:b;
  
    cout<<"\n--------------------------";

    cout<<"\n The minimum value is "<<min;

    cout<<"\n\n";
    return 0;

   
}
#include<iostream>
using namespace std;
int main(){
    int age;

    cout<<"Enter your age:";
    cin>>age;

    string p = (age>=18) ? "You are eligible for vote" : "you are not eligible for vote" ;
    cout<< p;
    
    cout<<"\n\n";

    return 0;
}
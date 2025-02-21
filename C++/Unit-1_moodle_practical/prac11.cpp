//Write a C++ program to calculate the sum of 6 subject and find the percentage.

#include<iostream>

using namespace std;

class subject{
    public:
    int HIN,GUJ,ENG,MATH,SCI,SS;
    int sum;
    float per;
    void sum_subject()
    {
        sum=HIN+GUJ+ENG+MATH+SCI+SS;
        per=(sum*100)/600;

        cout<<"\nSum of all subject is : "<<sum;
        cout<<"\nPercentage is : "<<per<<"%";
    }
}obj;

int main()
{
    cout<<"Enter the marks:";
    cin>>obj.HIN>>obj.GUJ>>obj.ENG>>obj.MATH>>obj.SCI>>obj.SS;

    obj.sum_subject();

    cout<<"\n\n";

    return 0;

}
// Write a C++ program to calculate the area of circle, rectangle and square using function 
// overloading.

#include<iostream>

using namespace std;

class formula{
    public:
    void area_circle()
    {
        int r;
        float sum,pi=3.14;

        cout<<"\nEnter the r:";
        cin>>r;

        sum=pi*r*r;

        cout<<"\nArea of circle is = "<<sum;
    }
    void rect(int l,int w)
    {
        int area_rec=l*w;

        cout<<"\nArea of rectangle = "<<area_rec;       
    }
    void squ(int n)
    {
       int area_squ=n*n;

       cout<<"\nArea of sqaure is = "<<area_squ;
    }
};
int main()
{
    formula obj;

    obj.area_circle();

    int l,w;
    cout<<"\n\nEnter the length:";
    cin>>l;

    cout<<"\n\nEnter the width:";
    cin>>w;
    obj.rect(l,w);

    int n;
    cout<<"\n\nEnter the sqaure:";
    cin>>n;
    obj.squ(n);
}

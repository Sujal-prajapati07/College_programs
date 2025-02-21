#include<iostream>

using namespace std;

class student
{
    public:
    string Name;
    int RollNo;

    student(string Name,int RollNo,int enrolment)
    {
        this->Name=Name;
        this->RollNo=RollNo;
        this->enrolment=enrolment;
    }

    // creating method 
   void PrintDetials()
   {
        cout<<"THE NAME OF STUDENT IS:\t"<<this->Name<<" AND THE ROLL NO. IS:"<<this->RollNo<<endl;

   }
void enrol()
{
    cout<<"The enrolemnt no. of student is:"<<this->enrolment;
}

    private:
    int enrolment;

};


int main()
{
    
    student one("Sujal",81,193);
    
    one.PrintDetials();
    one.enrol();
    // cout<<"THE NAME OF STUDENT IS:\t"<<one.Name<<" AND THE ROLL NO. IS:"<<one.RollNo<<endl;

    return 0;
}
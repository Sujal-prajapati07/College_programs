/* 1)Create a class name employee details which will take variables for employee name and employee salary if the salary of employee is above 50,000 then cut tds ₹1800 and
add hr allowance of 500 and print final salary */

#include<iostream>
using namespace std;

class EmployeeDetails{
    public:
    string EmployeeName;
    double EmployeeSalary;
};

int main()
{
    EmployeeDetails Employee;

    cout<<"\nEnter the name of Employee:";
    cin>>Employee.EmployeeName;

    cout<<"\nEnter the Employee salary:";
    cin>>Employee.EmployeeSalary;

    if(Employee.EmployeeSalary>50000)
    {
        double finalsalary=Employee.EmployeeSalary-1800+500;

        cout<<"\nEmployee name is:"<<Employee.EmployeeName;
        cout<<"\nFinal Salary is:"<<finalsalary;
    }
    else{
        cout<<"\n\nEmployee name is:"<<Employee.EmployeeName;
        cout<<"\n\nFinal salary is:"<<Employee.EmployeeSalary;
    }

    cout<<"\n\n";
    return 0;
}




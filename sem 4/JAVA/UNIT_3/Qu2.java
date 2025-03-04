class employee
{
    String empName;
    String empDesignation;

    employee(String empName,String empDesignation)
    {
        this.empName=empName;
        this.empDesignation=empDesignation;
    }
    void display()
    {
        System.out.println("Employee Name is : "+empName);
        System.out.println("Employee Designation is : "+empDesignation);
    }
}

class salary extends employee
{
    double employeeSalary;

    salary(String empName,String empDesignation,double employeeSalary)
    {
        super(empName, empDesignation);
        this.employeeSalary=employeeSalary;
    }

    void display()
    {
        super.display();
        System.out.println("Employee salary is : "+employeeSalary);
    }
}

class Qu2
{
    public static void main(String[] args) 
    {
        salary obj=new salary("Viraj", "Ahmedabad", 25000);

        obj.display();
    }
}

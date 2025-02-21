// Write a Java program to calculate gross salary and net salary of an employee.
//   Gross salary = Hourly rate * total number of hours worked
//   Net salary = gross salary - tax (7.5%)
//  Take values from users using Scanner class
import java.util.*;
public class qu3 
{
    public static void main(String[] args) 
    {
        Scanner obj=new Scanner(System.in);

        System.out.println("Enter the Horly rate : ");
        double hourly_rate=obj.nextFloat();

        System.out.println("Enter the total number of hours worked : ");
        int total_hours_worked=obj.nextInt();
        
        double Gross_Salary;
        double Net_salary;

        Gross_Salary=hourly_rate*total_hours_worked;
        Net_salary=Gross_Salary-(0.075*Gross_Salary);

        System.out.println("Net Salary is : "+Net_salary);
    }    
}

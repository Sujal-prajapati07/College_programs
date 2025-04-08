import java.util.*;

class Qu3 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the Hourly Rate : ");
        double hourlyRate=sc.nextDouble();

        System.out.println("Enter the total number of hours worked : ");
        double hourWork=sc.nextDouble();

        double grossSalary=hourlyRate*hourWork;

        double tax=grossSalary*0.075;

        double netSalary=grossSalary-tax;

        System.out.println("Gross Salary : "+grossSalary);

        System.out.println("Net Salary : "+netSalary);
    }
}

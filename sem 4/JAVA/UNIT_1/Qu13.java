import java.util.*;

class Qu13 
{
    public static void main(String[] args) 
    {
        System.out.println("Enter the marks : ");
        Scanner sc=new Scanner(System.in);

        int marks=sc.nextInt();

        if(marks>90 && marks<=100)
        {
            System.out.println("Grade A");
        }
        else if(marks>60 && marks<=90)
        {
            System.out.println("Grade B");
        }
        else if(marks>30 && marks<=60)
        {
            System.out.println("Grade c");
        }
        else if(marks>0 && marks<=30)
        {
            System.out.println("Fail");
        }
        else
        {
            System.out.println("Invalid Marks");
        }
    }
}

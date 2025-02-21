//Write a program to display the grade according to the marks entered by the user using else-if ladder.
import java.util.*;
public class qu13 
{
    public static void main(String[] args) 
    {
        System.out.println("Enter the marks : ");

        Scanner obj=new Scanner(System.in);

        int marks=obj.nextInt();

        if(marks>70)
        {
            System.out.println("Grade A");
        }
        else if(marks>=50 && marks<=70)
        {
            System.out.println("Grade B");
        }
        else if(marks>33 && marks<50)
        {
            System.out.println("Grade c");
        }
        else
        {
            System.out.println("Fail");
        }
    }    
}

//Write a Java Program that will accept a number from the user and calculateits square and cube and display the same.
import java.util.*;
public class qu4 
{
    public static void main(String[] args) 
    {
        System.out.println("Enter the number : ");
        Scanner obj=new Scanner(System.in);

        int a=obj.nextInt();

        System.out.println("NUMBER OF SQURE IS : "+a*a);
        System.out.println("NUMBER OF CUBE IS : "+a*a*a);
    }
}

//Write a Java Program to Find the Largest Number Among three Numbers Entered by User using nested if-else and if-else ladder
import java.util.*;
public class qu12 
{
    public static void main(String[] args) 
    {
        Scanner obj=new Scanner(System.in);

        System.out.println("Enter the x : ");
        int x=obj.nextInt();
        System.out.println("Enter the y : ");
        int y=obj.nextInt();
        System.out.println("Enter the z : ");
        int z=obj.nextInt();

        if(x>y && x>z)
        {
            System.out.println(x+" is bigger");
        }
        else if(y>x && y>z)
        {
            System.out.println(y+" is bigger");
        }
        else if(z>x && z>y)
        {
            System.out.println(z+" is bigger");
        }
        else
        {
            System.out.println("INVALID");
        }
    }    
}

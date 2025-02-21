//Write a Java program to enter two numbers and find the smallest out of them.Use conditional operator.
import java.util.*;
public class qu11 
{
    public static void main(String[] args) 
    {
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter the a : ");
        int a=obj.nextInt();
        System.out.println("Enter the b : ");
        int b=obj.nextInt();
        
        int min=(a<b ? a:b);

        System.out.println("MIN IS : "+min);
    }
}

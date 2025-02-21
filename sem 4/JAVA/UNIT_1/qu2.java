//Write a Java program that will convert the given temperature in fahrenheit to celcius using the formula C=(F-32)/1.8
import java.util.*;

public class qu2
{
    public static void main(String[] args) 
    {
        Scanner obj=new Scanner(System.in);
        
        System.out.println("Enter the Farenhit : ");

        int F=obj.nextInt();

        double c=(F-32)/1.8d;

        System.out.println("celsius is : "+c);
    }
}

//Write a Java Program to find area of a circle.
import java.util.*;
public class qu5 
{
    public static void main(String[] args) 
    {
        Scanner obj=new Scanner(System.in);
        
        System.out.println("Enter the radious : ");

        int r=obj.nextInt();

        double pi=3.14;

        double area_of_circle=pi*r*r;

        System.out.println("Area of circle is : "+area_of_circle);
    }
}

import java.util.*;
class Qu2 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the fahrenheit : ");
        double f=sc.nextDouble();

        double c=(f-32)/1.8;

        System.out.println("Celcius : "+c);
    }
}

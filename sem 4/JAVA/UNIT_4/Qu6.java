import java.util.*;
class Qu6 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the number1 : ");
        int a=sc.nextInt();

        System.out.println("Enter the number2 : ");
        int b=sc.nextInt();

        try
        {
            int ans=a/b;
            System.out.println("Answer is : "+ans);
        }
        catch(ArithmeticException e)
        {
            System.out.println("Error...can't division by zero");
        }
    }    
}

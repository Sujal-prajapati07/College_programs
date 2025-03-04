import java.util.*;
class Qu11 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the number : ");
        String n=sc.nextLine();

        try
        {
            int number=Integer.parseInt(n);

            System.out.println("Number is : "+number);
        }
        catch(NumberFormatException e)
        {
            System.out.println("The input is not a valid number");
        }
    }
}

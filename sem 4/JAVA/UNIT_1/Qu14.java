import java.util.*;

class Qu14 
{
    public static void main(String[] args) 
    {
        System.out.println("Enter the number : ");
        Scanner sc=new Scanner(System.in);

        int number=sc.nextInt();

        int originalNumber=number;

        int reverse=0;

        while(number!=0)
        {
            int digit=number%10;
            reverse=reverse*10+digit;
            number=number/10;
        }

        if(originalNumber==reverse)
        {
            System.out.println("Number is palindrom");
        }
        else
        {
            System.out.println("Number is not a palindrom");
        }
    }    
}

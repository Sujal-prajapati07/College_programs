import java.util.*;

class Qu11
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the num1 : ");
        int num1=sc.nextInt();
        System.out.println("Enter the num2 : ");
        int num2=sc.nextInt();

        String ans=(num1>num2) ? "Number 1 is bigger" : "Number 2 is bigger";

        System.out.println(ans);
    }
}

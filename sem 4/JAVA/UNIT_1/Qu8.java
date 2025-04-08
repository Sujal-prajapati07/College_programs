import java.util.*;

class CheckPrimeNum
{
    int number;

    CheckPrimeNum(int n)
    {
        int count=0;

        for(int i=1;i<=n;i++)
        {
           if(n%i==0)
           {
                count++;
           }
        }

        if(count==2)
        {
            System.out.println(n+" is prime number");
        }
        else
        {
            System.out.println(n+" is not a prime number");
        }
    }
}
class Qu8 
{
    public static void main(String[] args) 
    {
        System.out.println("Enter the number : ");
        Scanner sc=new Scanner(System.in);

        int num=sc.nextInt();

        CheckPrimeNum obj=new CheckPrimeNum(num);


    }
}

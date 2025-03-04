
import java.util.Scanner;

class square
{
    void func(int num)
    {
        if(num<0)
        {
            throw new IllegalArgumentException("Please enter the positive number");
        }
        else
        {
            int ans=num*num;
            System.out.println("Sqaure is : "+ans);
        }
    }
}

class Qu9
{
    public static void main(String[] args) 
    {
        square obj=new square();
        Scanner sc=new Scanner(System.in);

        try
        {
            System.out.println("Enter the number : ");
            int n=sc.nextInt();

            obj.func(n);
        }
        catch(IllegalArgumentException e)
        {
            System.out.println(e.getMessage());
        }
    }
}

import java.util.*;
class usingThrow
{
    void func(int age)
    {
        if(age<18)
        {
            throw new IllegalArgumentException("You can't vote");
        }
        else
        {
            System.out.println("you can vote");
        }
    }
}

class Qu15
{
    public static void main(String[] args) 
    {
        usingThrow obj=new usingThrow();
        try
        {
            System.out.println("Enter your age : ");
            Scanner sc=new Scanner(System.in);

            int a=sc.nextInt();

            obj.func(a);
        }
        catch(IllegalArgumentException e)
        {
            System.out.println(e.getMessage());
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}

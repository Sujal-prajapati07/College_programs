import java.util.*;

class LengthMatchException extends Exception
{
    LengthMatchException(String s)
    {
        super(s);
    }
}

class stringMatch
{
    void lengthCheck(String s,int len)throws LengthMatchException
    {
        if(s.length()!=len)
        {
            throw new LengthMatchException("length not match");
        }
        else
        {
            System.out.println("Length match");
        }
    }
}
public class Qu2 
{
    public static void main(String[] args) 
    {
        stringMatch obj=new stringMatch();

        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the length : ");
        int l=sc.nextInt();

        sc.nextLine();//read new line

        System.out.println("Enter the String : ");
        String str=sc.nextLine();

        try
        {
            obj.lengthCheck(str, l);
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }

        sc.close();
    }
}

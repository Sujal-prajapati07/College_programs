import java.util.*;
public class command_line_argument 
{
    public static void main(String[] args) 
    {
        // int l=Integer.parseInt(args[0]);
        // int b=Integer.parseInt(args[1]);

        // int aor=l*b;

        // System.out.println("Area of rectangle is : "+aor);

        int year=Integer.parseInt(args[0]);

        if(year%4==0)
        {
            System.out.println(args[0]+" is Leap year");
        }
        else
        {
            System.out.println(args[0]+" is Not leap year");
        }
    }
}
